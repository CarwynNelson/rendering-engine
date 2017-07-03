#pragma once

#include <iostream>

class Shader
{
private:
    unsigned int vertexShader, fragmentShader, shaderProgram;

public:
    Shader(const std::string vertexSource, const std::string fragmentSource)
    {
        vertexShader = compileShader(vertexSource, GL_VERTEX_SHADER);
        fragmentShader = compileShader(fragmentSource, GL_FRAGMENT_SHADER);

        shaderProgram = glCreateProgram();
        linkShadersToProgram();
    }

    unsigned int getVertexShader()
    {
        return vertexShader;
    }

    unsigned int getFragmentShader()
    {
        return fragmentShader;
    }

    unsigned int getProgram()
    {
        return shaderProgram;
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

    void checkLinkStatus()
    {
        int success;
        char infoLog[512];

        glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
        if (!success)
        {
            glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
            std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
        }
    }

    void linkShadersToProgram()
    {
        glAttachShader(shaderProgram, vertexShader);
        glAttachShader(shaderProgram, fragmentShader);
        glLinkProgram(shaderProgram);

        checkLinkStatus();

        glDeleteShader(vertexShader);
        glDeleteShader(fragmentShader);
    }
};
