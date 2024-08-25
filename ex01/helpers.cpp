#include "helpers.hpp"

std::string	getUserInput ()
{
	std::string input;
	const char *fillmessage = "This field is mandatory\n";

	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	if (input.length() == 0)
		std::cout << fillmessage;
	return (input);
}

std::string resizedField (std::string str)
{
	std::string resizedStr;
	size_t	strSize;

	resizedStr = str;
	strSize = str.length();
	resizedStr.resize(strSize, ' ');
	if (strSize <= 10)
	{
		std::string spaces(10 - strSize, ' ');
		resizedStr = spaces + resizedStr;
	}
	else if (str.length() > 10)
	{
		resizedStr.resize(9, ' ');
		resizedStr += '.';
		// resizedStr.resize(10, '.');
	}
	return (resizedStr);
}