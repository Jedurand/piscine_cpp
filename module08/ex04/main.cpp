#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <cstdio>
#include <stack>
#include "Token.hpp"

void printList(std::list<Token> tokens, std::string prefix)
{
	std::list<Token>::iterator it = tokens.begin();
	std::list<Token>::iterator end = tokens.end();

	std::cout << prefix << ": ";

	while (it != end)
	{
		if (it->getType() == 0)
			std::cout << "Num(" << it->getValue() << ") ";
		else if (it->getType() == 1 || it->getType() == 2)
			std::cout << "Op(" << static_cast<char>(it->getValue()) << ") ";
		else if (it->getValue() == 40)
			std::cout << "ParOpen ";
		else
			std::cout << "ParClose ";
		it++;
	}
	std::cout << std::endl;
}

void parseOp(std::list<Token>& tokens, char **av)
{
	int i = 0;
	int ret;
	int num;
	int flag_minus = 1;
	char op;	
	
	while (av[1][i] != 0)
	{
		if (av[1][i] == 32)
			i++;
		else if (isdigit(av[1][i]))
		{
			ret = sscanf(&av[1][i], "%d", &num);
			
			if (!tokens.empty() && tokens.back().getType() == NUM)
			{
				std::cout << "Parsing Error\n";
				exit(1);
			}	
			tokens.push_back(Token(num * flag_minus, 0));
			flag_minus = 1;
			for (; isdigit(av[1][i]); i++) ;
		}
		else if (av[1][i] == '(' || av[1][i] == ')' || av[1][i] == '+' ||
		av[1][i] == '-' || av[1][i] == '*' || av[1][i] == '/')
		{	
			ret = sscanf(&av[1][i], "%c", &op);
			if (op == '-' && (tokens.size() == 0 || tokens.back().getType() != NUM))
				flag_minus = -1;
			else
				tokens.push_back(Token(static_cast<int>(op), 1));
			i += ret;
		}
		else
		{
			std::cout << "ARguments invalid\n";
			exit(1);
		}
	}
	printList(tokens, "Tokens");
}	

void shuntingYard(std::list<Token>& tokens, std::list<Token>& output, std::stack<Token>& opStack)
{
	std::list<Token>::iterator it = tokens.begin();
	std::list<Token>::iterator end = tokens.end();

	while (it != end)
	{
		if (it->getType() == NUM)
		{
			output.push_back(*it);
		}
		else if (it->getType() == OP_LOW || it->getType() == OP_HIGH)
		{
			if (opStack.size() > 0 && 
			it->getType() <= opStack.top().getType() && 
			opStack.top().getType() != PAROPEN)
			{
				output.push_back(opStack.top());
				opStack.pop();
			}
			opStack.push(*it);
		}
		else if (it->getType() == PAROPEN)
			opStack.push(*it);
		else if (it->getType() == PARCLOSE)
		{
			while (opStack.size() != 0 && 
			opStack.top().getType() != PAROPEN)
			{
				output.push_back(opStack.top());
				opStack.pop();
			}
			if (opStack.size() == 0)
			{
				std::cout << "bad formating with ()\n";
				exit(1);
			}
			if (opStack.top().getType() == PAROPEN)
				opStack.pop();
		}
		it++;
	}
	while (opStack.size() > 0)
	{
		if (opStack.top().getType() == PAROPEN)
		{
			std::cout << "Bad formating with ()\n";
			exit(1);
		}
		output.push_back(opStack.top());
		opStack.pop();
	}
	printList(output, "Postfix");
/*	if (nop != nnum - 1)
	{
		std::cout << "Parse error, not enough operators or not enough numbers\n";
		exit(1);
	}*/
}	

void formatOutput(Token& token, const char *operation, std::stack<int> op)
{
	std::cout << "I ";
	if (token.getType() == NUM)
		std::cout << "Num(" << token.getValue();
	else
		std::cout << "Op(" << static_cast<char>(token.getValue());
	std::cout << ") | " << operation << " | ST";
	
	while (op.size() > 0)
	{
		std::cout << " " << op.top();
		op.pop();
	}
	std::cout << "]\n";
}

void doOp(Token& token, std::stack<int>& op)
{
	int b;

	b = op.top();
	op.pop();

/*	if (op.size() == 0)
	{
		std::cout << "Bad formating, a number is missing\n";
		exit(1);
	}	*/
	if (token.getValue() == 42) // mult
	{
		op.top() = op.top() * b;
		formatOutput(token, "OP MULT", op);
	}
	else if (token.getValue() == 47) // div
	{
		op.top() = op.top() / b;
		formatOutput(token, "OP DIV", op);
	}
	else if (token.getValue() == 43) // +
	{
		if (op.size() > 0)
			op.top() = op.top() + b;
		else
			op.push(b);
		formatOutput(token, "OP ADD", op);
	}
	else if (token.getValue() == 45) // -
	{
		if (op.size() > 0)
			op.top() = op.top() - b;
		else
			op.push(-b);
		formatOutput(token, "OP SUB", op);
	}
}	

void resolve(std::list<Token>& output)
{
	std::list<Token>::iterator it = output.begin();
	std::list<Token>::iterator end = output.end();

	std::stack<int> op;

	while (it != end)
	{
		if (it->getType() == NUM)
		{
			op.push(it->getValue());
			formatOutput(*it, "OP PUSH", op);
		}
		if (it->getType() != NUM)
			doOp(*it, op);
		it++;
	}
	std::cout << "Result: " << op.top() << std::endl;
}
				
int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	
	std::list<Token> tokens;
	
	parseOp(tokens, av);
	

	std::list<Token> output;
	std::stack<Token> opStack;

	shuntingYard(tokens, output, opStack);

	if (!output.empty())
		resolve(output);	
		
	return (0);
}		
