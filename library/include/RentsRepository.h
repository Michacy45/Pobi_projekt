#ifndef PROJEKTX_RENTSREPOSITORY_H
#define PROJEKTX_RENTSREPOSITORY_H

#include "Rent.h"

class RentsRepository {
private:
    list<shared_ptr<Rent>> rents;
public:
    void addRent(shared_ptr<Rent>);
    void removeRent(shared_ptr<Rent>);
    shared_ptr<Rent> returnRentForClient(shared_ptr<Client>);
    bool checkRent(shared_ptr<Room>);
    shared_ptr<Rent> getRent(shared_ptr<Room>);
};

#endif
