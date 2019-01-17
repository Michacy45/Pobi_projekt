#include "Company.h"

Company::Company(string name, boost::uuids::uuid ID) : Client(){
    this->name = name;
    ID = Client::getID();
}

double Company::getDiscount() {
    return 0.2*Client::getDiscount();
}

string Company::getClientInfo() {
    stringstream info;

    info << "Firma: Nazwa: " << name << " ID: " << Client::getClientInfo();
    return info.str();
}