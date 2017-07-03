#pragma once

#include "Model.h"
#include <vector>

class Loader
{
public:
	~Loader();
	Model loadData(std::vector<GLfloat> vertices);
private:
	std::vector<GLuint> vaos;
	std::vector<GLuint> vbos;

	GLuint createVao();

	void deleteVao();

	void storeVboDataInAttributeList(
		GLuint attributeNumber,
		std::vector<GLfloat> vertices
	);
};
