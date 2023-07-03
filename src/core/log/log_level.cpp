#include <bonsai/core/log/log_level.h>
#include <string>

std::wstring getLevelName(LogLevel level) {
	switch (level) {
	case LogLevel::FATAL:
		return L"FATAL";
	case LogLevel::ERROR:
		return L"ERROR";
	case LogLevel::WARN:
		return L"WARN";
	case LogLevel::INFO:
		return L"INFO";
	case LogLevel::DEBUG:
		return L"DEBUG";
	case LogLevel::TRACE:
		return L"TRACE";
	default:
		return L"UNKNOWN";
	}
}