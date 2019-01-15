#include "Rent.h"
#include "Client.h"

Rent::Rent(shared_ptr<Client> client, shared_ptr<Room> room, int startDate, int endDate) {
    this->client=client;
    this->room=room;
    this->startDate=startDate;
    this->endDate=endDate;
    shared_ptr<Rent> rent (this);
    this->client->addRent(rent);
}

shared_ptr<Client> Rent::getClient() {
    return client;
}

shared_ptr<Room> Rent::getRoom() {
    return room;
}

void Rent::changeEndDate(int endDate) {
    this->endDate=endDate;
}

int Rent::getStartDate(){
    return startDate;
}

int Rent::getEndDate() {
    return endDate;
}

int Rent::getRentPrice() {
    return getDuration()*room->getBasePrice()*client->getDiscount();
}

int Rent::getDuration(){
    return endDate-startDate;
}