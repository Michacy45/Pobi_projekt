#include "Reception.h"

void Reception::createRent(shared_ptr<Client> client, shared_ptr<Room> room, int startDate, int endDate) {
    shared_ptr<Rent> rent (new Rent(client,room,startDate,endDate));
}