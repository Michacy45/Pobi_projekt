#include "Client.h"

Client::Client() {
    ID = boost::uuids::random_generator()();
}

string Client::getClientInfo() {
    stringstream info;
    info << " ID = " << ID << endl;
    return info.str();
}

double Client::getDiscount() {
    return 1;
}

UUID Client::getID() {
    return ID;
}