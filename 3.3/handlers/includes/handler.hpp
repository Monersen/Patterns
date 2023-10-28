#pragma once
#include "../../type/type.hpp"
using namespace std;

class Handler {
public:
    Handler() {}
    virtual Handler* setNext(Handler* handler) = 0;
    virtual string handle(Type type, string message) = 0;
};