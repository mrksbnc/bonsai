#pragma once

#include <GLFW/glfw3.h>
#include <bonsai/platform/window.h>

class GlfwWindow : public Window {
public:
	GlfwWindow();

	virtual void open() override;
	virtual void update() override;

private:
	GLFWwindow* _window;
};