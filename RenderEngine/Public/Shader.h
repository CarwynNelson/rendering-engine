#pragma once

#include <iostream>

class Shader
{
private:
    int vertexShader, fragmentShader;
public:
    Shader(const std::string vertexSource, const std::string fragmentSource)
    {
        vertexShader = compileShader(vertexSource, GL_VERTEX_SHADER);
        fragmentShader = compileShader(fragmentSource, GL_FRAGMENT_SHADER);
    }

    int getVertexShader()
    {
        return vertexShader;
    }

    int getFragmentShader()
    {
        return fragmentShader;
    }
private:
    int compileShader(std::string shaderSource, GLenum shaderType)
    {
        const char* shaderSourcePtr = shaderSource.c_str();

        int shaderId = glCreateShader(shaderType);
        glShaderSource(shaderId, 1, &shaderSourcePtr, nullptr);
        glCompileShader(shaderId);

        checkCompileStatus(shaderId);

        return shaderId;
    }

    void checkCompileStatus(int shaderId)
    {
        int success;
        char infoLog[512];

        glGetShaderiv(shaderId, GL_COMPILE_STATUS, &success);
        if (!success)
        {
            glGetShaderInfoLog(shaderId, 512, nullptr, infoLog);
            std::cout << "ERROR::SHADER::COMPILATION_FAILED\n" << infoLog << std::endl;
        }
    }
};
