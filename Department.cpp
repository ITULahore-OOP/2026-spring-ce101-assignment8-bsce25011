#include "Department.h"
Department::Department(string departmentName) {
    this->departmentName = departmentName;
    membersCount = 0;
    for (int i = 0; i < 50; i++) {
        members[i] = nullptr;
    }
}
void Department::addMember(UniversityMember * member) {
    if (membersCount < 50) {
        members[membersCount] = member;
        membersCount++;
    }
}
void Department::displayAllRoles() {
    for (int i = 0; i < membersCount; i++) {
        if (members[i] != nullptr) {
            members[i]->displayRole();
        }
    }
}