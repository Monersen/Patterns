#pragma once
#include "../type/type.hpp"
#include <string>
using namespace std;

class LogMessage {
public:
    LogMessage();

    Type type() const;
    const string& messages() const;

private:
    string message;
    Type typeMessage;
};