#ifndef PROJEKTX_RECEPTION_H
#define PROJEKTX_RECEPTION_H

#include "RentsRepository.h"
#include "ExceptionRent.h"

class Reception {
private:
    RentsRepository currentRentsRepository;
    RentsRepository archiveRentsRepository;
public:
    double getRentPrice(shared_ptr<Rent>);
    void createRent(shared_ptr<Client>,shared_ptr<Room>, string);
    double endRent(shared_ptr<Rent>);
    shared_ptr<Rent> getRent(shared_ptr<Room>);

};
#endif