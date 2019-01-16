#include "Reception.h"

void Reception::createRent(shared_ptr<Client> client, shared_ptr<Room> room, int startDate, int endDate) {
    if(!currentRentsRepository.checkRent(room)) {
        shared_ptr<Rent> rent(new Rent(client, room, startDate, endDate));
    }
    //else wyjatek
}
 void Reception::endRent(shared_ptr<Rent> rent) {
    currentRentsRepository.removeRent(rent);
    archiveRentsRepository.addRent(rent);
}

