#pragma once

#include "log_entry.h"

// Forward declaration
class AbstractLogChannel;

class LogEntryBuilder : private LogEntry {
public:
	LogEntryBuilder(const wchar_t* sourceFile, const wchar_t* functionName, int lineNr);
	~LogEntryBuilder();

	LogEntryBuilder& level(LogLevel level);
	LogEntryBuilder& setChannel(AbstractLogChannel* channel);
	LogEntryBuilder& fatal(std::wstring log = L"");
	LogEntryBuilder& error(std::wstring log = L"");
	LogEntryBuilder& warn(std::wstring log = L"");
	LogEntryBuilder& info(std::wstring log = L"");
	LogEntryBuilder& debug(std::wstring log = L"");
	LogEntryBuilder& trace(std::wstring log = L"");

private:
	AbstractLogChannel* _channel = nullptr;
};