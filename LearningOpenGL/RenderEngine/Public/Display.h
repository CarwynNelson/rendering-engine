#pragma once

// GLEW
#define GLEW_STATIC
#include <GL\glew.h>

// GLFW
#include <GLFW/glfw3.h>

#include <iostream>
#include <functional>

// Game Libs
#include "Exceptions\WindowNotLoadedException.h"

class Display
{
public:
	Display(int width, int height, std::string title)
	{
		createGlfwWindow(width, height, title);
	}

	~Display()
	{
		glfwTerminate();
	}

	void update()
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	bool closing()
	{
		return glfwWindowShouldClose(window) == 1;
	}
private:
	GLFWwindow* window;

	void createGlfwWindow(int width, int height, std::string title)
	{
		glfwInit();
		setWindowHints();

		window = glfwCreateWindow(
			width,
			height,
			title.c_str(),
			nullptr,
			nullptr
		);

		if (window == nullptr)
			throw WindowNotLoadedException();

		glfwMakeContextCurrent(window);

		if (!initGlew())
			throw WindowNotLoadedException();

		glfwGetFramebufferSize(window, &width, &height);
		glViewport(0, 0, width, height);
		glfwSwapInterval(1); // enable vsync
	}

	void setWindowHints()
	{
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
	}

	bool initGlew()
	{
		glewExperimental = GL_TRUE;

		if (glewInit() != GLEW_OK)
		{
			std::cout << "Failed to initialize GLEW" << std::endl;
			return false;
		}

		return true;
	}
};
