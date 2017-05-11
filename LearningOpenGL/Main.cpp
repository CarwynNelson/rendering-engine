// System libs
#include <exception>

// Game Libs
#include "RenderEngine/Public/Display.h"
#include "RenderEngine/Public/Model.h"
#include "RenderEngine/Public/Loader.h"

int main()
{
	try
	{

		std::vector<GLfloat> vertices = {
			-0.5f,  0.5f, 0.0f,
			-0.5f, -0.5f, 0.0f,
			0.5f, -0.5f, 0.0f,

			0.5f, -0.5f, 0.0f,
			0.5f,  0.5f, 0.0f,
			-0.5f,  0.5f, 0.0f
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

		Loader loader;
		auto model = loader.loadData(vertices);

		while (!display.closing())
		{
			glClearColor(0.1f, 0.2f, 0.3f, 1.0);
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

			glEnableVertexAttribArray(0);
			glBindBuffer(GL_ARRAY_BUFFER, model.getVbo());
			glVertexAttribPointer(
				0, // attribute 0
				3, // 3 vertices
				GL_FLOAT,
				GL_FALSE,
				0,
				(GLvoid*)0
			);
			
			glDrawArrays(GL_TRIANGLES, 0, vertices.size());
			
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
