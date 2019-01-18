#include "Person.h"

Person::Person(string firstName, string lastName): Client() {
    this->firstName = firstName;
    this->lastName = lastName;
}

double Person::getDiscount() {
    return Client::getDiscount()*1;
}

string Person::getClientInfo() {
    stringstream info;
    info << "Klient: Imie i nazwisko: " << firstName << " " << lastName << Client::getClientInfo();
    return info.str();
}

string Person::getName() {
    return firstName;
}

string Person::getLastName() {
    return lastName;
}