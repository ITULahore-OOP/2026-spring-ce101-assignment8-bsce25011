#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "UniversityMember.h"
using namespace std;
class Student : virtual public UniversityMember {
    private:
    double cgpa;
    public:
    Student(string name, int memberID, double Cgpa);
    double getCGPA() const;
    void updateCGPA(double newCGPA);
    void displayRole() override;
};
#endif