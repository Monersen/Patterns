#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class LogCommand {
public:
    virtual ~LogCommand() = default;
    virtual void print(const string& message) = 0;
};

class printLogConsole : public LogCommand {
public:
    void print(const string& message) override {
        cout << message << endl;
    }
};

class printLogFile : public LogCommand {
public:
    explicit printLogFile(const string& path) : path(path) {}

    void print(const string& message) override {
        ofstream log(path);
        log << message;
        log.close();
    }
private:
    string path;
};