#include "Client.h"

Client::Client(int ID) {

}

void Client::addRent(shared_ptr<Rent> rent) {
    bool bodyguard=true;
    for(auto it:rents)
    {
        if(it==rent)
        {
            bodyguard=false;
        }
    }

    if(bodyguard)
    {
        rents.push_back(rent);
    }
}

string Client::getClientInfo() {
    ostringstream info;
    info<<" ID = " << ID << endl;
    return info.str();
}

double Client::getDiscount() {
    return 1;
}

int Client::getID() {
    return ID;
}