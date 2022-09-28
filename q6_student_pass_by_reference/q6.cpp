// Your code here! :)
#include "q6.h"

void graduate(Student &student)
{
    unsigned int grade = student.get_grade();
    grade += 1;
    student.set_grade(grade);
};