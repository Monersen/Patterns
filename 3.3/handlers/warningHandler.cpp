#include "../includes/warningHandler.hpp"
using namespace std;

string WarningHandler::handle(Type type, string message) {
    if (type.getType() == "Warning") {
        cout << "Warning: " << message << endl;
        return "Warning";
    }
    else {
        return AbstractHandler::handle(type, message);
    }
}