#include "App.h"

#include "GLFW/glfw3.h"

App::App()
{
	m_window = new Window();
}

App::~App()
{
	delete m_window;
}

void App::Run()
{
	while (true)
	{
		glfwPollEvents();
		glfwSwapBuffers(m_window->getGLFWwindow());
	}
}