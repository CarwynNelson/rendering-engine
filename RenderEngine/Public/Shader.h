#pragma once

#include <GL/glew.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:
	Shader(std::string vertexPath, std::string fragmentPath);
	~Shader();

	void activate();
	void deactivate();
	void setBool(const std::string &name, bool value) const;
	void setInt(const std::string &name, int value) const;
	void setFloat(const std::string &name, float value) const;
	void bindAttribute(int attribute, std::string variableName);
	
	virtual void bindAttributes() = 0;
private:
	unsigned int programId,
		vertexShaderId,
		fragmentShaderId;

	unsigned int compileShader(std::string shaderSource, GLenum shaderType);
	std::string getShaderSource(std::string filePath);
	unsigned int compileProgram(unsigned int vertexShaderId, unsigned int fragmentShaderId);
};