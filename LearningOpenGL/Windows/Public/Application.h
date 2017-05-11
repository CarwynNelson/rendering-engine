#pragma once

// System libs
#include <exception>

// Game Libs
#include "../../RenderEngine/Public/Display.h"
#include "../../RenderEngine/Public/Model.h"
#include "../../RenderEngine/Public/Loader.h"
#include "../../RenderEngine/Public/Renderer.h"

class Application
{
public:
	void run();
private:
	const std::vector<GLfloat> vertices = {
		-0.5f,  0.5f, 0.0f,
		-0.5f, -0.5f, 0.0f,
		0.5f, -0.5f, 0.0f,

		0.5f, -0.5f, 0.0f,
		0.5f,  0.5f, 0.0f,
		-0.5f,  0.5f, 0.0f
	};
};
