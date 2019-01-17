#include "Person.h"

Person::Person(string firstName, string lastName, boost::uuids::uuid ID): Client() {
    this->firstName = firstName;
    this->lastName = lastName;
    ID = Client::getID();
}

double Person::getDiscount() {
    return Client::getDiscount()*1;
}

string Person::getClientInfo() {
    stringstream info;
    info << "Klient: Imie i nazwisko: " << firstName << " " << lastName << Client::getClientInfo();
    return info.str();
}