// System libs
#include <exception>

// Game Libs
#include "RenderEngine/Public/Display.h"
#include "RenderEngine/Public/Model.h"
#include "RenderEngine/Public/Loader.h"
#include "RenderEngine/Public/Renderer.h"

int main()
{
	try
	{
		const std::vector<GLfloat> vertices = {
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
		Loader loader;
		Renderer renderer;

		// NOTE: I would like to remove getWindow
		// and find some way to encapsulate setting
		// key bindings / callbacks
		glfwSetKeyCallback(display.getWindow(), exitCallback);

		auto model = loader.loadData(vertices);

		while (!display.closing())
		{
			renderer.prepare();
			renderer.render(model);

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
