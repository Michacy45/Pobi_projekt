#ifndef PROJEKTX_CLIENT_H
#define PROJEKTX_CLIENT_H

//#include <boost>
#include <iostream>
#include <string>
#include <memory>
#include <list>
#include "Rent.h"
#include <sstream>
using namespace std;

class Client{
private:
    boost::uuids::uuid ID;
    list<shared_ptr<Rent>> rents;
public:
    Client();
    void addRent(shared_ptr<Rent>);
    virtual string getClientInfo()=0;
    virtual double getDiscount()=0;
    boost::uuids::uuid getID();
};
#endif
