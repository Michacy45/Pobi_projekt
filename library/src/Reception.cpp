#include "Reception.h"

void Reception::createRent(shared_ptr<Client> client, shared_ptr<Room> room, string endDate) {
    if(!currentRentsRepository.checkRent(room)) {
        shared_ptr<Rent> rent(new Rent(client, room, endDate));
    }
    //else wyjatek
}
 void Reception::endRent(shared_ptr<Rent> rent) {
    currentRentsRepository.removeRent(rent);
    archiveRentsRepository.addRent(rent);
}

/*int Reception::getRentPrice(shared_ptr<Rent> rent) {
    return rent->getRentPrice();
}*/