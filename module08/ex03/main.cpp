#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#define MAX_BYTES 171

int executeLoop(std::vector<char> cmds, int *p, int io, unsigned char *bytes);
void executeInstruction(char c, int *p, unsigned char *bytes);
bool isInstruction(char c);


int main(int ac, char **av)
{
	char c = 0;

	if (ac != 2)
		return (1);

	std::ifstream file(av[1]);
	if (!file)
		return (1);

	std::vector<char> cmds;
	unsigned char bytes[MAX_BYTES];
	int	p = 0;

	while (file.get(c))
	{
		if (!isInstruction(c) && c != 0 && c != '\n' && c != 32)
		{
			std::cout << c << " Unknown instruction\n";
			return (1);
		}
		if (c != 0 && c != '\n' && c != 32)
			cmds.push_back(c);
	//
	}// ne gere qu'une boucle pour l'instant;
	// Executions:
	file.close();
//	std::cout << "ici\n";
	bzero(bytes, MAX_BYTES * sizeof(char));
	p = 0;

	for (int i = 0; i < cmds.size(); i++)
	{
//		std::cout << "lol\n";
		if (cmds[i] == '[')
			i = executeLoop(cmds, &p, i + 1, bytes);
		executeInstruction(cmds[i], &p, bytes);
	}
	std::cout << "\n<done>\n";
	return (0);
}

int executeLoop(std::vector<char> cmds, int *p, int io, unsigned char *bytes)
{
	int i;
	while (bytes[*p])
	{
//		std::cout << *p << "\n";
		i = io;
//		std::cout << cmds[i] << " " << i << std::endl;
		while (cmds[i] != ']')
		{
			if (cmds[i] == '[')
				i = executeLoop(cmds, p, i + 1, bytes);
//			std::cout << cmds[i] << " " << i << std::endl;

			executeInstruction(cmds[i], p, bytes);
			i++;
		}
		i++;
	}
	return (i);
}

void executeInstruction(char c, int *p, unsigned char *bytes)
{
	if (c == '>')
		*p += 1;
	else if (c == '<')
		*p -= 1;
	else if (c == '+')
		bytes[*p] += 1;
	else if (c == '-')
		bytes[*p] -= 1;
	else if (c == '.')
		std::cout << bytes[*p];
	else if (c == ',')
		bytes[*p] = getchar();
}

bool isInstruction(char c)
{
	if (c == '>' || c == '<' || c == '+' || c == '-' || c == '.'
		|| c == ',' || c == ',' || c == ']' || c == '[')
		return true;
	else
		return false;
}
