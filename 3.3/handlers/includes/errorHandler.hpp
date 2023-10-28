#pragma once
#include "abstractHandler.hpp"
using namespace std;

class ErrorHandler : public AbstractHandler {
public:
    string handle(Type type, string message) override;
};