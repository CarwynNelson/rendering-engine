#pragma once

#include <GL\glew.h>

struct Model
{
	Model(GLuint vbo)
	{
		this->vbo = vbo;
	}

	GLuint getVbo()
	{
		return vbo;
	}
private:
	GLuint vbo;
};