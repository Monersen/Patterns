#include "../includes/errorHandler.hpp"
#include <fstream>
using namespace std;

string ErrorHandler::handle(Type type, string message) {
    if (type.getType() == "Error") {
        ofstream error("../../errors/error.txt");
        error << message << endl;
        error.close();
        return "Error!";
    }
    else {
        return AbstractHandler::handle(type, message);
    }
}