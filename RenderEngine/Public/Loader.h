#pragma once

#include <vector>

class Loader
{
private:
    unsigned int vao, vbo, ebo;
public:
    Loader(std::vector<float> vertices, std::vector<unsigned int> indices)
    {
        glGenVertexArrays(1, &vao);

        glGenBuffers(1, &vbo);
        glGenBuffers(1, &ebo);

        // Make the vao active.
        glBindVertexArray(vao);

        // bind the VBO to the array buffer and send the vertices to it.
        glBindBuffer(GL_ARRAY_BUFFER, vbo);
        glBufferData(GL_ARRAY_BUFFER, vertices.size() * 4, vertices.data(), GL_STATIC_DRAW);

        // bind the EBO to the element array buffer and send the indices to it.
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * 4, indices.data(), GL_STATIC_DRAW);

        // attach the active buffers to the vertex attribute array (vao)
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);

        // enable the vao
        glEnableVertexAttribArray(0);

        // disable the vao
        glBindVertexArray(0);
    }

    ~Loader()
    {
        glDeleteVertexArrays(1, &vao);

        glDeleteBuffers(1, &vbo);
        glDeleteBuffers(1, &ebo);
    }

    unsigned int getVao()
    {
        return vao;
    }

    unsigned int getVbo()
    {
        return vbo;
    }

    unsigned int getEbo()
    {
        return ebo;
    }
};