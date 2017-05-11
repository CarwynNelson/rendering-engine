#pragma once

#include <GL\glew.h>

class Model
{
public:
	Model(GLuint vaoId, int vertexCount)
		: vaoId(vaoId), vertexCount(vertexCount)
	{
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