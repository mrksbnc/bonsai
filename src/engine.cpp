#include "platform/glfw_window.h"
#include <GLFW/glfw3.h>
#include <bonsai/engine.h>
#include <bonsai/service_locator.h>
#include <iostream>

void Bonsai::init(void) {
	std::cout << "Bonsai engine initializing window..." << std::endl;

	GlfwWindow* window = new GlfwWindow();
	ServiceLocator::provide(window);
}
