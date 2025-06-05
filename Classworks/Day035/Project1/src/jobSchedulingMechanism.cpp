#include<iostream>
#include<fstream>
#include<string>
#include"job.h"
using namespace std;

enum LogLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};


int main() {
    ofstream fOut("ebi.txt");

    //// Convert log level to string
    //string levelToString(LogLevel level) {
    //    switch (level) {
    //    case DEBUG: return "DEBUG";
    //    case INFO: return "INFO ";
    //    case WARNING: return "WARN ";
    //    case ERROR: return "ERROR";
    //    default: return "UNKNOWN";
    //    }
    //}

    string line;

    ifstream fin("emp.txt.txt");
    if (!fin.is_open()) {
        cerr << "Error:opening the File" << endl;
    }
    getline(fin, line, '&');
    cout << line << endl;
    /*while (getline(fin, line,'&')) {
        cout << line << endl;
    }*/
    fin.close();

}