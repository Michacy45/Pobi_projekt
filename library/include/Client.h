#ifndef PROJEKTX_CLIENT_H
#define PROJEKTX_CLIENT_H

#include <iostream>
#include <string>
#include <memory>
#include <list>
#include "Rent.h"
#include <sstream>
using namespace std;

typedef boost::uuids::uuid UUID;

class Client{
private:
    UUID ID;
    //int ID;
    list<shared_ptr<Rent>> rents;
public:
    Client();
    void addRent(shared_ptr<Rent>);
    virtual string getClientInfo()=0;
    virtual double getDiscount()=0;
    //int getID();
    UUID getID();
};
#endif
