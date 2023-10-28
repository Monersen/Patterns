#include "../includes/unknownMessageHandler.hpp"
using namespace std;

string UnknownMessageHandler::handle(Type type, string message) {
    try {
        if (type.getType() != "Unknown Message") {
            return AbstractHandler::handle(type, message);
        }
    }
    catch (...) {
        cout << "Unknown Message: " << message << endl;
        return "Unknown Message";
    }

    return "What?";
}