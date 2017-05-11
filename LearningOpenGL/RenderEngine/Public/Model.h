#pragma once

#include <GL\glew.h>

struct Model
{
	Model(GLuint vaoId, int vertexCount)
	{
		this->vaoId = vaoId;
		this->vertexCount = vertexCount;
	}

	GLuint getVaoId()
	{
		return vaoId;
	}

	int getVertexCount()
	{
		return vertexCount;
	}
private:
	GLuint vaoId;
	int vertexCount;
};