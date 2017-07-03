#pragma once

// System libs
#include <exception>
#include <string>

// Game Libs
#include "Display.h"
#include "Model.h"
#include "Loader.h"
#include "Renderer.h"
#include "Shader.h"

class Application
{
public:
	void run();
private:
	const std::string fragmentShader = std::string(
		"/Users/carwynnelson/code/rendering-engine/RenderEngine/Resources/fragmentShader.glsl"
	);

	const std::string vertexShader = std::string(
        "/Users/carwynnelson/code/rendering-engine/RenderEngine/Resources/vertexShader.glsl"
	);

//	const std::vector<GLfloat> vertices = {
//		-0.5f,  0.5f, 0.0f,
//		-0.5f, -0.5f, 0.0f,
//		0.5f, -0.5f, 0.0f,
//
//		0.5f, -0.5f, 0.0f,
//		0.5f,  0.5f, 0.0f,
//		-0.5f,  0.5f, 0.0f
//	};
};
