#include "Client.h"

Client::Client() {
    ID = boost::uuids::random_generator()();
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
    stringstream info;
    info << " ID = " << ID << endl;
    return info.str();
}

double Client::getDiscount() {
    return 1;
}

boost::uuids::uuid Client::getID() {
    return ID;
}