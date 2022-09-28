// Your code here! :)
#include "student.h"
namespace potd
{
    std::string Student::get_name()
    {
        return name_;
    };
    void Student::set_name(std::string name)
    {
        name_ = name;
    };
    unsigned int Student::get_grade()
    {
        return grade_;
    };
    void Student::set_grade(unsigned int grade)
    {
        grade_ = grade;
    };
}
