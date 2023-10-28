#pragma once
#include <string>
#include <iostream>
using namespace std;

struct Type {
public:
    Type() {
        addType();
    }

    string getType() const {
        return type;
    }

private:
    void addType() {
        int select = 0;
        cout << "Message type?" << endl;
        cout << "1. Warning" << endl;
        cout << "2. Error" << endl;
        cout << "3. Fatal Error" << endl;
        cout << "4. Unknown Message" << endl;
        cout << "Number: ";
        cin >> select;

        switch (select)
        {
        case 1:
            type = warning;
            break;
        case 2:
            type = error;
            break;
        case 3:
            type = fatalError;
            break;
        case 4:
            type = unknownMessage;
            break;

        default:
            break;
        }
    }
    string type;

    string warning = "Warning";
    string error = "Error";
    string fatalError = "Fatal Error";
    string unknownMessage = "Unknown Message";
};
