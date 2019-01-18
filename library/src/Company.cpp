#include "Company.h"

Company::Company(string name) : Client(){
    this->name = name;
}

double Company::getDiscount() {
    return 0.2*Client::getDiscount();
}

string Company::getClientInfo() {
    stringstream info;

    info << "Firma: Nazwa: " << name << " ID: " << Client::getClientInfo();
    return info.str();
}

string Company::getName() {
    return name;
}