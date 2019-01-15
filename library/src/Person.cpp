#include "Person.h"

Person::Person(string firstName, string lastName, int ID): Client(ID) {
    this->firstName = firstName;
    this->lastName = lastName;
}

double Person::getDiscount() {
    return Client::getDiscount()*1;
}

string Person::getClientInfo() {
    ostringstream info;
    info << "Klient: Imie i nazwisko: " << firstName << " " << lastName << Client::getClientInfo();
    return info.str();
}