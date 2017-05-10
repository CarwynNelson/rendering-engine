#pragma once

#include <exception>

class WindowNotLoadedException : public std::exception
{
	virtual const char* what() const throw()
	{
		return "The window / display could not be loaded";
	}
};