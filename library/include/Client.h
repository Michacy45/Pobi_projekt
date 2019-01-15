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
    int ID;
    list<shared_ptr<Rent>> rents;
public:
    Client(int);
    void addRent(shared_ptr<Rent>);
    virtual string getClientInfo()=0;
    virtual double getDiscount()=0;
    int getID();

};


#endif
