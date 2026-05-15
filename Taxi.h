#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

struct Taxi {
    string number;
    string model;
    string driver;
    bool onCall; 

    Taxi(string n, string m, string d) : number(n), model(m), driver(d), onCall(false) {}

    void show() const {
        cout << "Number: " << number << " | Model: " << model
            << " | Driver: " << driver
            << " | Status: " << (onCall ? "On Call" : "Free") << endl;
    }
};