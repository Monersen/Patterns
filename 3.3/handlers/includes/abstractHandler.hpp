#pragma once
#include "handler.hpp"
using namespace std;

class AbstractHandler : public Handler {
public:
    AbstractHandler() : next_handler_(nullptr) {}

    Handler* setNext(Handler* handler) override;

    string handle(Type type, string message) override;
private:
    Handler* next_handler_;
};