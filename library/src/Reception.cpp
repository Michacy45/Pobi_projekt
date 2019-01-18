#include "Reception.h"
#include "Client.h"

void Reception::createRent(shared_ptr<Client> client, shared_ptr<Room> room, string endDate) {
    if(client == nullptr) throw ExceptionRent("client nullem");
    if(room == nullptr) throw  ExceptionRent("room nullem");
    if(!currentRentsRepository.checkRent(room)) {
        shared_ptr<Rent> rent(new Rent(client, room, endDate));
        currentRentsRepository.addRent(rent);
    }
    else throw ExceptionRent("Pokoj zajety");
}
double Reception::endRent(shared_ptr<Rent> rent) {
    currentRentsRepository.removeRent(rent);
    archiveRentsRepository.addRent(rent);
    return getRentPrice(rent);
}

double Reception::getRentPrice(shared_ptr<Rent> rent) {
    return rent->getRentPrice();
}

shared_ptr<Rent> Reception::getRent(shared_ptr<Room> room) {
    return currentRentsRepository.getRent(room);
}