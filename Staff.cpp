#include "Staff.h"
Staff::Staff(string name, int memberID, double salary, AccessCard card):UniversityMember(name,memberID),card(card) {
    this->salary = salary;
}
double Staff::getSalary() const {
    return salary;
}
void Staff::displayRole() {
    cout << "Role: Staff" << endl;
}
void Staff::displayCard()const {
    card.displayCardInfo();
}

