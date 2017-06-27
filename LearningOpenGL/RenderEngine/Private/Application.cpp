#include "..\Public\Application.h"

#include "../Public/StaticShader.h"

void Application::run()
{
	try
	{
		Display display(800, 600, "Learning OpenGL");
		Loader loader;
		Renderer renderer;
		StaticShader shader(vertexShader, fragmentShader);
		
		auto model = loader.loadData(vertices);

		while (!display.closing())
		{
			shader.activate();

			renderer.prepare();
			renderer.render(model);

			shader.deactivate();

			display.update();
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
