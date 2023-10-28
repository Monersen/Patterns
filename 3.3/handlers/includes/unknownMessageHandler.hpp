#pragma once
#include "abstractHandler.hpp"
using namespace std;

class UnknownMessageHandler : public AbstractHandler {
public:
    string handle(Type type, string message) override;
};