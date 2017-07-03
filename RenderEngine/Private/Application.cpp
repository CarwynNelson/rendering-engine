#include "../Public/Application.h"

void Application::run()
{
	std::string vertexShaderSource = "#version 330 core\n"
			"\n"
			"layout (location = 0) in vec3 aPos;\n"
			"\n"
			"void main()\n"
			"{\n"
			"    gl_Position = vec4(aPos, 1.0);\n"
			"}";
	std::string fragmentShaderSource = "#version 330 core\n"
			"\n"
			"out vec4 FragColor;\n"
			"\n"
			"void main()\n"
			"{\n"
			"    FragColor = vec4(1.0f, 0.5f, 02.f, 1.0f);\n"
			"}";

	try
	{
        std::vector<float> vertices = {
                0.5f,  0.5f, 0.0f,  // top right
                0.5f, -0.5f, 0.0f,  // bottom right
                -0.5f, -0.5f, 0.0f,  // bottom left
                -0.5f,  0.5f, 0.0f   // top left
        };
        std::vector<unsigned int> indices = {  // note that we start from 0!
                0, 1, 3,   // first triangle
                1, 2, 3    // second triangle
        };

		Display display(800, 600, "Learning OpenGL");
		Renderer renderer;
        Shader shader(vertexShaderSource, fragmentShaderSource);

        Loader loader(vertices, indices);

		while (!display.closing())
		{
			renderer.prepare();

			glUseProgram(shader.getProgram());
			glBindVertexArray(loader.getVao());
			glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
			glBindVertexArray(0);

			display.update();
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
