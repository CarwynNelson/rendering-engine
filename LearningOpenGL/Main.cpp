// System libs
#include <exception>

// Game Libs
#include "RenderEngine/Public/Display.h"

int main()
{
	try
	{
		// An array of 3 vectors which represents 3 vertices
		static const GLfloat vertices[] = {
			-1.0f, -1.0f, 0.0f,
			1.0f, -1.0f, 0.0f,
			0.0f,  1.0f, 0.0f,
		};

		auto exitCallback = [](GLFWwindow* window, int key, int scancode, int action, int mode) {
			if (key == GLFW_KEY_ESCAPE && action == GLFW_RELEASE)
				glfwSetWindowShouldClose(window, GL_TRUE);
		};

		Display display(800, 600, "Learning OpenGL");

		// NOTE: I would like to remove getWindow
		// and find some way to encapsulate setting
		// key bindings / callbacks
		glfwSetKeyCallback(display.getWindow(), exitCallback);

		GLuint vaoId;
		glGenVertexArrays(1, &vaoId);
		glBindVertexArray(vaoId);

		GLuint vbo;
		glGenBuffers(1, &vbo);
		glBindBuffer(GL_ARRAY_BUFFER, vbo);

		glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

		while (!display.closing())
		{
			glEnableVertexAttribArray(0);
			glBindBuffer(GL_ARRAY_BUFFER, vbo);
			glVertexAttribPointer(
				0, // attribute 0
				3, // 3 vertices
				GL_FLOAT,
				GL_FALSE,
				0,
				(GLvoid*)0
			);
			
			glDrawArrays(GL_TRIANGLES, 0, 3);
			glDisableVertexAttribArray(0);

			display.update();
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return -1;
	}
	
	return 0;
}
