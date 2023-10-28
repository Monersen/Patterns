#pragma once
#include "observer.hpp"
#include <string>
#include <vector>
using namespace std;

class Observed {
public:
    Observed(Observer* observer);
    ~Observed();

    void addObserver();

    void RemoveObserver();

    void warning(const string& message) const;
    void error(const string& message) const;
    void fatalError(const string& message) const;

private:
    Observer* observer_;
    vector<Observer*> observers_;
};