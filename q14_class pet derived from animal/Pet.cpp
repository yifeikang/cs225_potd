// Pet.cpp
#include "Pet.h"
#include <iostream>
using namespace std;
Pet::Pet():name_("Fluffy"), owner_name_("Cinda") {
setType("cat");
food_="fish";
};
    Pet::Pet(string type, string food, string name, string owner):name_(name), owner_name_(owner){
        setType(type);
        food_=food;
    };
    string Pet::getName() {
        return name_;
    };
    void Pet::setName(string name) {
        name_=name;
    };
    string Pet::getOwnerName() {
        return owner_name_;
    };
    void Pet::setOwnerName(string owner) {
        owner_name_=owner;
    };
    string Pet::print() {
 return "My name is " + name_;
    };
