// Animal.h
#pragma once
#include <string>
using namespace std;
class Animal{
public:
Animal();
Animal(string type, string food);
string getType();
void setType(string type);
string getFood();
void setFood(string food);
string print();
private:
string type_;
protected:
string food_;
};