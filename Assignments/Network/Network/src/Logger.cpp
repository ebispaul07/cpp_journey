#include<iostream>
#include "Logger.h"

using namespace std;

void Logger::log(Loglevel level, const string& message) {
	string strlevel;

	switch (level) {
	case INFO:
		strlevel = "[INFO]";
		break;
	case DEBUG:
		strlevel = "[DEBUG]";
	case WARNING:
		strlevel = "[WARNING]";
		break;
	case ERROR:
		strlevel = "[ERROR]";
		break;
	}

	string fullMessage = strlevel + message;
	if (logcount < MAX) {
		logs[logcount++] = fullMessage;
	}
	cout << fullMessage << endl;
}

void Logger::exportlog(const string& filename) {

	ofstream out(filename);
	out << "[INFO] job chain Execution log" << endl;
	for (int i = 0;i < logcount;i++) {
		out << logs[i] << endl;
	}
	out.close();
	log(INFO, "Log saved to" + filename);

}