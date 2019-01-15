#ifndef PROJEKTX_PERSON_H
#define PROJEKTX_PERSON_H

#include "Client.h"

using namespace std;

class Person: public Client {
private:
    string firstName;
    string lastName;
public:
    Person(string, string, int);
    double getDiscount();
    string getClientInfo();
};
#endif