#include <iostream>
#include <string>
#include "logсommand.hpp"
using namespace std;

void print(LogCommand& log) {
    const string message = "Hello, this is logging file!";
    log.print(message);
}

int main() {
    printLogConsole pConsole;
    printLogFile pFile("log.txt");

    print(pFile);
    print(pConsole);

    return 0;
}