#include "TutoringSession.h"
TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student) {
    this->sessionID = sessionID;
    this->durationMinutes = durationMinutes;
    this->ta = ta;
    this->student = student;
}
double TutoringSession::getDuration()const {
    return durationMinutes;
}
void TutoringSession::displaySession() const {
    cout << "Session ID: " << sessionID
        << ", Duration: " << durationMinutes << " minutes";
    if (ta != nullptr) {
        cout << ", TA: " << ta->getName();
    }
    if (student != nullptr) {
        cout << ", Student: " << student->getName();
    }
    cout << endl;
}
TutoringSession TutoringSession::operator+(const TutoringSession& other) const {
    return TutoringSession(sessionID, durationMinutes + other.durationMinutes, ta, student);
}
bool operator>(const TutoringSession & s1, const TutoringSession & s2) {
    return s1.getDuration() > s2.getDuration();
}