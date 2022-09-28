// Pet.h
#include "Animal.h"
#include <string>
#pragma once
using namespace std;

class Pet : public Animal {
    private:
    string name_;
    string owner_name_;
    public:
    Pet();
    Pet(string type, string food, string name, string owner);
    string getName();
    void setName(string name);
    string getOwnerName();
    void setOwnerName(string owner);
    string print();
};