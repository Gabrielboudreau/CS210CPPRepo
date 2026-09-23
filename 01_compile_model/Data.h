//
// Created by gabri on 9/17/2026.
//

#ifndef CS210_CPP_INTRO_DATA_H
#define CS210_CPP_INTRO_DATA_H
#include <iostream>
#include <ostream>
#include <string>


class Data {
    public:
    int numID;
    string name;

    Data(int numID, string name) {
        this->numID = numID;
        this->name = name;
    }
    void print() {
        cout << numID << " " << name << endl;
    }
};

#endif //CS210_CPP_INTRO_DATA_H
