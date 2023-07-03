#pragma once

#include "log_level.h"
#include <chrono>
#include <string>

struct LogEntry {
	LogLevel level = LogLevel::INFO;
	std::wstring message;
	const wchar_t* source = nullptr;
	const wchar_t* function = nullptr;
	int line = -1;
	std::chrono::system_clock::time_point timestamp;
};