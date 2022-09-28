// Your code here! :)
#pragma once
#include <string>
namespace potd
{
    class Student
    {
    private:
        std::string name_;
        unsigned int grade_;

    public:
        Student() = default;
        std::string get_name();
        void set_name(std::string name);
        unsigned int get_grade();
        void set_grade(unsigned int grade);
    };
}