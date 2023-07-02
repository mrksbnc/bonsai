#pragma once

#include <bonsai/platform/window.h>
#include <memory>

class ServiceLocator {
public:
	static inline const std::unique_ptr<Window>& getWindow() { return _window; }
	static inline void provide(Window* window) {
		if (_window != nullptr) {
			return;
		}

		_window = std::unique_ptr<Window>(window);
	}

private:
	static inline std::unique_ptr<Window> _window = nullptr;
};