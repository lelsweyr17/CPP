#include "Replace.hpp"

void	replace(std::string filename, std::string s1, std::string s2)    
{
	std::ifstream	fIn;
	std::ofstream	fOut;
	std::string		testStr;
	size_t len;

	fIn.open(filename);
	fOut.open(filename + ".replace");
	if (!fIn.is_open() || !fOut.is_open())
	{
		std::cout << "File open error" << std::endl;
		return ;
	}
	while (std::getline(fIn, testStr))
	{
		len = testStr.find(s1);
		while (len != -1)
		{
			testStr.replace(len, s1.size(), s2);
			len = testStr.find(s1);
		}
		if (fIn.eof())
			fOut << testStr;
		else
			fOut << testStr + '\n';
	}
	fIn.close();
	fOut.close();
}
