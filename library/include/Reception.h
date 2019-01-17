#ifndef PROJEKTX_RECEPTION_H
#define PROJEKTX_RECEPTION_H

#include "RentsRepository.h"

class Reception {
private:
    RentsRepository currentRentsRepository;
    RentsRepository archiveRentsRepository;
public:
    int getRentPrice(shared_ptr<Rent>);
    void createRent(shared_ptr<Client>,shared_ptr<Room>, string);
    void endRent(shared_ptr<Rent>);
};
#endif