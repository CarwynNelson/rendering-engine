#pragma once

// System libs
#include <exception>
#include <string>

// Game Libs
#include "../Public/Display.h"
#include "../Public/Model.h"
#include "../Public/Loader.h"
#include "../Public/Renderer.h"

class Application
{
public:
	void run();
private:
	const std::string fragmentShader = std::string(
		"C:\\Users\\Carwyn\\Documents\\Visual Studio 2017\\Projects\\LearningOpenGL\\LearningOpenGL\\RenderEngine\\Resources\\fragmentShader"
	);

	const std::string vertexShader = std::string(
		"C:\\Users\\Carwyn\\Documents\\Visual Studio 2017\\Projects\\LearningOpenGL\\LearningOpenGL\\RenderEngine\\Resources\\vertexShader"
	);

	const std::vector<GLfloat> vertices = {
		-0.5f,  0.5f, 0.0f,
		-0.5f, -0.5f, 0.0f,
		0.5f, -0.5f, 0.0f,

		0.5f, -0.5f, 0.0f,
		0.5f,  0.5f, 0.0f,
		-0.5f,  0.5f, 0.0f
	};
};
