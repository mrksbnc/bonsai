#include "glfw_window.h"

GlfwWindow::GlfwWindow() {
	_window = nullptr;
}

void GlfwWindow::open() {
	glfwInit();

	_window = glfwCreateWindow(800, 600, "Bonsai", NULL, NULL);

	if (!_window) {
		glfwTerminate();
		return;
	}

	glfwMakeContextCurrent(_window);
}

void GlfwWindow::update() {
	while (!glfwWindowShouldClose(_window)) {
		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(_window);
		glfwPollEvents();
	}

	glfwTerminate();
}