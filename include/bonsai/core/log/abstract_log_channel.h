#pragma once

// Forward declaration
struct LogEntry;

class AbstractLogChannel {
public:
	virtual ~AbstractLogChannel() = default;
	virtual void submit(LogEntry&) = 0;
};