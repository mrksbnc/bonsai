#include "glfw_window.h"

GlfwWindow::GlfwWindow() {
	_window = nullptr;
}

void GlfwWindow::open() {
	if (!glfwInit())
		return;

	_window = glfwCreateWindow(800, 600, "Bonsai", NULL, NULL);

	if (!_window) {
		glfwTerminate();
		return;
	}

	glfwMakeContextCurrent(_window);
	return;
}

void GlfwWindow::update() {
	while (!glfwWindowShouldClose(_window)) {
		glfwSwapBuffers(_window);
		glfwPollEvents();
	}

	glfwTerminate();
}