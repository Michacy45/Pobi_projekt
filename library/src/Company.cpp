#include "Company.h"

Company::Company(string name, int ID) : Client(ID){
    this->name = name;
}

double Company::getDiscount() {
    return 0.2*Client::getDiscount();
}

string Company::getClientInfo() {
    ostringstream info;

    info << "Firma: Nazwa: " << name << " ID: " << Client::getClientInfo();
    return info.str();
}