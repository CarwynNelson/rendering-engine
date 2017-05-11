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

		Display display(800, 600, "Learning OpenGL");
		Loader loader;
		Renderer renderer;

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
