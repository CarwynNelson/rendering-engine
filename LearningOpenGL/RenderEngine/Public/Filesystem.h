#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Filesystem
{
public:
	std::string loadFileAsString(std::string location);
};