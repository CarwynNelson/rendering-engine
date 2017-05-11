#pragma once

#include "Model.h"
#include <vector>

class Loader
{
public:
	Model loadData(std::vector<GLfloat> vertices)
	{
		GLuint vaoId;
		glGenVertexArrays(1, &vaoId);
		glBindVertexArray(vaoId);

		GLuint vbo;
		glGenBuffers(1, &vbo);
		glBindBuffer(GL_ARRAY_BUFFER, vbo);

		auto size = vertices.size() * sizeof(GLfloat);
		auto data = vertices.data();

		glBufferData(
			GL_ARRAY_BUFFER,
			size,
			data,
			GL_STATIC_DRAW
		);

		return Model(vbo);
	}
};
