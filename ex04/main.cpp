#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	std::fstream filein, fileout;
	std::string s1, s2, fileName, fileReplace;
	if (argc != 4)
	{
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return 1;
	}
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: Strings must not be empty." << std::endl;
		return 1;
	}
	filein.open(fileName.c_str(), std::ios::in);
	if (!filein.is_open())
	{
		std::cerr << "Error: Could not open file " << fileName << std::endl;
		return 1;
	}
	fileReplace = fileName + ".replace";
	fileout.open(fileReplace.c_str(), std::ios::out | std::ios::trunc);
	if (!fileout.is_open())
	{
		std::cerr << "Error: Could not create file " << fileReplace << std::endl;
		filein.close();
		return 1;
	}

	// first we get s1 size
	int s1_size = s1.size();
	// and then since iam not slaved like get_next_line i'll dump the whole file in a string
	std::string fileContent;
	std::string line;
	while (std::getline(filein, line))
	{
		fileContent += line;
		if (!filein.eof())
			fileContent += "\n"; // add the newline character back except for the last line
	}
	filein.close();
	for (size_t i = 0; i < fileContent.size(); i++)
	{
		if (fileContent.substr(i, s1_size) == s1)
		{
			fileout << s2;
			i += s1_size - 1; // move the index forward by the size of s1 - 1 because the for loop will increment i
		}
		else
			fileout << fileContent[i];
	}
	fileout.close();
	return 0;
}
