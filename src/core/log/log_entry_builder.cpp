#include <bonsai/core/log/abstract_log_channel.h>
#include <bonsai/core/log/log_entry.h>
#include <bonsai/core/log/log_entry_builder.h>

LogEntryBuilder::LogEntryBuilder(const wchar_t* sourceFile, const wchar_t* functionName, int lineNr)
		: LogEntry{
					.source = sourceFile,
					.function = functionName,
					.line = lineNr,
					.timestamp = std::chrono::system_clock::now()} {
}

LogEntryBuilder::~LogEntryBuilder() {
	if (_channel != nullptr) {
		_channel->submit(*this);
	}
}

LogEntryBuilder& LogEntryBuilder::level(LogLevel level) {
	level = level;
	return *this;
}

LogEntryBuilder& LogEntryBuilder::setChannel(AbstractLogChannel* channel) {
	_channel = channel;
	return *this;
}
