#include "../Public/Display.h"

Display::Display(int width, int height, std::string title)
{
	createGlfwWindow(width, height, title);
}

Display::~Display()
{
	glfwTerminate();
}

void Display::update()
{
	glfwSwapBuffers(window);
	glfwPollEvents();
}

bool Display::closing()
{
	return glfwWindowShouldClose(window) == 1;
}

void Display::createGlfwWindow(int width, int height, std::string title)
{
	glfwInit();
	setWindowHints();

	window = glfwCreateWindow(
		width,
		height,
		title.c_str(),
		nullptr,
		nullptr
	);

	if (window == nullptr)
		throw WindowNotLoadedException();

	glfwMakeContextCurrent(window);

	if (!initGlew())
		throw WindowNotLoadedException();

	glfwGetFramebufferSize(window, &width, &height);
	glViewport(0, 0, width, height);
	glfwSwapInterval(1); // enable vsync
}

void Display::setWindowHints()
{
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
}

bool Display::initGlew()
{
	glewExperimental = GL_TRUE;

	if (glewInit() != GLEW_OK)
	{
		std::cout << "Failed to initialize GLEW" << std::endl;
		return false;
	}

	return true;
}
