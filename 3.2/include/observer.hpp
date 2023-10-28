#pragma once
#include <string>
using namespace std;

class Observer {
public:
    virtual ~Observer() = default;

    virtual void onWarning(const string& message) = 0;
    virtual void onError(const string& message) = 0;
    virtual void onFatalError(const string& message) = 0;
};

class ObserverWarning : public Observer {
public:
    void onWarning(const string& message) override {}
};

class ObserverError : public Observer {
public:
    void onError(const string& message) override {}

private:
    const string path = "../errors/error.txt";
};

class ObserverFatalError : public Observer {
public:
    void onFatalError(const string& message) override {}

private:
    const string path = "../errors/error.txt";
};