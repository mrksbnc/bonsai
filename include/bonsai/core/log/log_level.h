#pragma once

#include <string>

enum class LogLevel {
	FATAL,
	ERROR,
	WARN,
	INFO,
	DEBUG,
	TRACE,
};

std::wstring getLevelName(LogLevel);