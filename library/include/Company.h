#ifndef PROJEKTX_COMPANY_H
#define PROJEKTX_COMPANY_H

#include "Client.h"

using namespace std;

class Company : public Client {
private:
    string name;
public:
    Company(string, /*boost::uuids::uuid*/ int);
    double getDiscount();
    string getClientInfo();
};
#endif
