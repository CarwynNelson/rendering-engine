#pragma once

// GLEW
#define GLEW_STATIC
#include <GL/glew.h>

// GLFW
#include <GLFW/glfw3.h>

#include <iostream>
#include <functional>

// Game Libs
#include "Exceptions/WindowNotLoadedException.h"

class Display
{
public:
	Display(int width, int height, std::string title);
	~Display();
	void update();
	bool closing();
private:
	GLFWwindow* window;

	void createGlfwWindow(int width, int height, std::string title);
	void setWindowHints();
	bool initGlew();
};
