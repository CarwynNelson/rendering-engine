#include "../Public/Shader.h"

Shader::Shader(std::string vertexPath, std::string fragmentPath)
{
	std::string vertexSource = getShaderSource(vertexPath);
	std::string fragmentSource = getShaderSource(fragmentPath);

	vertexShaderId = compileShader(vertexSource, GL_VERTEX_SHADER);
	fragmentShaderId = compileShader(fragmentSource, GL_FRAGMENT_SHADER);

	programId = compileProgram(vertexShaderId, fragmentShaderId);
}

Shader::~Shader()
{
	deactivate();

	glDetachShader(programId, vertexShaderId);
	glDetachShader(programId, fragmentShaderId);

	glDeleteShader(vertexShaderId);
	glDeleteShader(fragmentShaderId);

	glDeleteProgram(programId);
}

void Shader::activate()
{
	glUseProgram(programId);
}

void Shader::deactivate()
{
	glUseProgram(0);
}

void Shader::setBool(const std::string & name, bool value) const
{
	GLint location = glGetUniformLocation(programId, name.c_str());
	glUniform1i(location, (int)value);
}

void Shader::setInt(const std::string & name, int value) const
{
	GLint location = glGetUniformLocation(programId, name.c_str());
	glUniform1i(location, value);
}

void Shader::setFloat(const std::string & name, float value) const
{
	GLint location = glGetUniformLocation(programId, name.c_str());
	glUniform1f(location, value);
}

void Shader::bindAttribute(int attribute, std::string variableName)
{
}

unsigned int Shader::compileShader(std::string shaderSource, GLenum shaderType)
{
	const char* shaderSourcePtr = shaderSource.c_str();

	unsigned int shaderId;
	int success;
	char infoLog[512];

	shaderId = glCreateShader(shaderType);
	std::cout << "about to call glShaderSource: " << std::endl << shaderSourcePtr << std::endl;
	glShaderSource(shaderId, 1, &shaderSourcePtr, nullptr);
	glCompileShader(shaderId);

	glGetShaderiv(shaderId, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		glGetShaderInfoLog(shaderId, 512, nullptr, infoLog);
		std::cout << "ERROR::SHADER::COMPILATION_FAILED\n" << infoLog << std::endl;
	}

	return shaderId;
}

std::string Shader::getShaderSource(std::string filePath)
{
	std::string sourceCode;
	std::ifstream shaderFile;
	shaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);

	try
	{
		shaderFile.open(filePath);
		std::stringstream shaderStream;
		shaderStream << shaderFile.rdbuf();

		shaderFile.close();
		sourceCode = shaderStream.str();
	}
	catch (std::ifstream::failure e)
	{
		std::cout <<
			"ERROR::SHADER::FILE_NOT_READ" << std::endl;
	}
	
	return sourceCode;
}

unsigned int Shader::compileProgram(unsigned int vertexShaderId, unsigned int fragmentShaderId)
{
	int success;
	char infoLog[512];
	unsigned int program = glCreateProgram();

	glAttachShader(program, vertexShaderId);
	glAttachShader(program, fragmentShaderId);

	glLinkProgram(program);

	glGetProgramiv(program, GL_LINK_STATUS, &success);
	if (!success)
	{
		glGetProgramInfoLog(program, 512, nullptr, infoLog);
		std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
	}
	
	return program;
}
