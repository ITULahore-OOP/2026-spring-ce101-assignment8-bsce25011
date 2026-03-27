#ifndef TUTORINGSESSION_H
#define TUTORINGSESSION_H
#include <iostream>
#include "TeachingAssistant.h"
#include "Student.h"
using namespace std;

class TutoringSession {
private:
    int sessionID;
    double durationMinutes;
    TeachingAssistant* ta;
    Student* student;
public:
    TutoringSession(int sessionID = 0, double durationMinutes = 0.0, TeachingAssistant* ta = nullptr, Student* student = nullptr);
    double getDuration()const;
    void displaySession()const;
    TutoringSession operator+(const TutoringSession & other)const;
};
bool operator>(const TutoringSession & s1, const TutoringSession & s2);
#endif

