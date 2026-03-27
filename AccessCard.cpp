#include "AccessCard.h"
AccessCard::AccessCard(string cardID, int acessLevel) {
    this->cardID = cardID;
    this->accessLevel = acessLevel;
}
string AccessCard::getCardID() const {
    return cardID;
}
int AccessCard::getAccessLevel() const {
    return accessLevel;
}
void AccessCard::displayCardInfo() const {
    cout << "cardID" << cardID << ", Access Level: " << accessLevel << endl;
}