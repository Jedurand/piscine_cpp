#include <iostream>
#include <fstream>
#include <string>

#define GEN_INCLUDES "#include <iostream>\n#include <string>\n"

/*
	1: path
	2: <filename without .type and with a capital>
	3: <<type> nvariables <type> nvaribles ...>
*/

int main(int ac, char **av)
{
	if (ac == 0)
	{
		std::cout << "format\n";
		return (1);
	}
	
	std::string path = av[1];
	if (path[path.size() - 1] != '/')
		path += '/';
	path += av[2];
	path += ".hpp";
	std::ofstream file(path);
	if (!(file))
		return (1);
	file << GEN_INCLUDES << "\n";
	file << "class " << av[2] << "\n\{\n";
	file << "\tpublic:\n";

	/* constructors : */
	std::string name = av[2];
	name[0] += (97 - 65);
	file << "\t" << av[2] << "();\n";
	file << "\t~" << av[2] << "();\n";
	file << "\t" << av[2] << "(const " << av[2] << "& " << name << ");\n";
	file << "\tvoid operator = (const " << av[2] << "& " << name << ");\n";

	file <<  "\n\t" << "private:" << "\n";

	/* format variables if there are any */
	std::string type= "";
	if (ac > 3)
	{
		for (int i = 3; av[i] != 0; i++)
		{
			std::string s = (std::string)av[i];
			if (s == "int" || s == "char" || s == "str" || s == "unsigned int" || s == "unsigned char" || s == "float" || s == "double")
			{
				type = av[i];
				if (type == "str")
					type = "std::string";
				continue ;
			}
			file << "\t";
			file << type << " _" << av[i] << ";\n";
		}
	}
	file << "};";

	path = av[1];
	if (path[path.size() - 1] != '/')
		path += '/';
	path += av[2];
	path += ".cpp";
	
	std::ofstream file2(path);
	if (!file2)
		return (1);
	
	file2 << "#include \"" << av[2] << ".hpp\"\n\n";
	file2 << av[2] << "::" << av[2] << "()\n{\n\n}\n\n";
	file2 << av[2] << "::" << "~" << av[2] << "()\n{\n\n}\n\n";
	file2 << av[2] << "::" << av[2] << "(const " << av[2] << "& " << name << ")\n";
	file2 << "{\n\n}\n\n";
	file2 << "void " << av[2] << "::" << "operator = (const " << av[2] << "& " << name << ")\n";
	file2 << "{\n\n}\n";
	
	return (0);
		
}

