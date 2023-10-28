#pragma once
#include "abstractHandler.hpp"
using namespace std;

class WarningHandler : public AbstractHandler {
public:
    string handle(Type type, string message) override;
};