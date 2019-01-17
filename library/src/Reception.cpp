#include "Reception.h"
#include "Client.h"

void Reception::createRent(shared_ptr<Client> client, shared_ptr<Room> room, int startDate, int endDate/*string endDate*/) {
    if(!currentRentsRepository.checkRent(room)) {
        shared_ptr<Rent> rent(new Rent(client, room,startDate,endDate));
        currentRentsRepository.addRent(rent);
        client->addRent(rent);
    }
    //else wyjatek
}
 double Reception::endRent(shared_ptr<Rent> rent) {
    currentRentsRepository.removeRent(rent);
    archiveRentsRepository.addRent(rent);
    return getRentPrice(rent);
}

int Reception::getRentPrice(shared_ptr<Rent> rent) {
    return rent->getRentPrice();
}

shared_ptr<Rent> Reception::getRent(shared_ptr<Room> room) {
    return currentRentsRepository.getRent(room);
}