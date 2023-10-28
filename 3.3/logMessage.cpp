#include "../includes/logMessage.hpp"
using namespace std;

LogMessage::LogMessage() {
    typeMessage = type();
    message = messages();
}

Type LogMessage::type() const {
    Type typeMessage();

    return typeMessage();
}

const string& LogMessage::messages() const {
    string msg;
    cout << "Error Message: ";
    cin >> msg;

    return msg;
}