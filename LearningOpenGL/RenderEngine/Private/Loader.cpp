#include "..\Public\Loader.h"

Loader::~Loader()
{
	while (vbos.size() > 0)
	{
		glDeleteBuffers(1, &vbos.back());
		vbos.pop_back();
	}

	while (vaos.size() > 0)
	{
		glDeleteVertexArrays(1, &vaos.back());
		vaos.pop_back();
	}
}

Model Loader::loadData(std::vector<GLfloat> vertices)
{
	GLuint vaoId = createVao();
	storeVboDataInAttributeList(0, vertices);
	deleteVao();

	return Model(vaoId, vertices.size());
}

GLuint Loader::createVao()
{
	GLuint vaoId;
	glGenVertexArrays(1, &vaoId);
	glBindVertexArray(vaoId);

	vaos.push_back(vaoId);
	return vaoId;
}

void Loader::deleteVao()
{
	glBindVertexArray(0);
}

void Loader::storeVboDataInAttributeList(
	GLuint attributeNumber,
	std::vector<GLfloat> vertices
)
{
	// create a vertex buffer object
	GLuint vbo;
	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	vbos.push_back(vbo);

	// store our vertex data in the buffer
	auto size = vertices.size() * sizeof(GLfloat);
	auto data = vertices.data();
	glBufferData(
		GL_ARRAY_BUFFER,
		size,
		data,
		GL_STATIC_DRAW
	);

	// tell opengl how and where to store the vbo in the vao
	glVertexAttribPointer(
		0, // attribute 0
		3, // 3 vertices
		GL_FLOAT,
		GL_FALSE,
		0,
		nullptr
	);
}
