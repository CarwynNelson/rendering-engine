#pragma once

#include <string>
#include "Shader.h"

class StaticShader : public Shader
{
public:
	StaticShader(
		std::string vertexPath,
		std::string fragmentPath
	) : Shader(vertexPath, fragmentPath)
	{
		
	}

	virtual void bindAttributes()
	{
		bindAttribute(0, "position");
	}
};