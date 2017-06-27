#include "../Public/Filesystem.h"

std::string Filesystem::loadFileAsString(std::string location)
{
	std::ifstream file(location.c_str());

	// TODO: add some error checking here. ifstream.good()
	// should return an integer (0 or 1?) which should
	// should indicate if the file was loaded correctly.

	std::stringstream fileContents;
	fileContents << file.rdbuf();
	
	return fileContents.str();
}
