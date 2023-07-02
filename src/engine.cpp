#include "platform/glfw_window.h"
#include <GLFW/glfw3.h>
#include <bonsai/engine.h>
#include <bonsai/service_locator.h>
#include <iostream>

int Bonsai::init() {
	std::cout << "Bonsai engine initializing window..." << std::endl;

	ServiceLocator::provide(new GlfwWindow());
	return 0;
}
