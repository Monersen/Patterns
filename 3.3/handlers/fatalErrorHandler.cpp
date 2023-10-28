#include "../includes/fatalErrorHandler.hpp"
using namespace std;

string FatalErrorHandler::handle(Type type, string message) {
    try
    {
        if (type.getType() != "Fatal Error") {
            return AbstractHandler::handle(type, message);
        }
    }
    catch (...)
    {
        cout << message << endl;
        return "Fatal Error";
    }
    return "What?";
}