#include "..\Public\Application.h"

void Application::run()
{
	try
	{
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
	}
}
