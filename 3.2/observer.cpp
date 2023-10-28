#include "../include/observer.hpp"
#include <iostream>
#include <fstream>
using namespace std;

void ObserverWarning::onWarning(const string& message) {
    cout << "Warning: " << message << endl;
}

void ObserverError::onError(const string& message) {
    ofstream error(path);
    error << "Error: " << message << endl;
    error.close();
}

void ObserverFatalError::onFatalError(const string& message) {
    cout << "FatalError: " << message << endl;

    ofstream error(path);
    error << "FatalError: " << message << endl;
    error.close();
}