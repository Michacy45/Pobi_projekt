#include "Rent.h"
#include "Client.h"

Rent::Rent(shared_ptr<Client> client, shared_ptr<Room> room, string sEndDate) {
    this->client=client;
    this->room=room;
    this->startDate=boost::posix_time::second_clock::local_time();
    //endDate = boost::posix_time::time_from_string(sEndDate);
    shared_ptr<Rent> rent (this);
    this->client->addRent(rent);
}

shared_ptr<Client> Rent::getClient() {
    return client;
}

shared_ptr<Room> Rent::getRoom() {
    return room;
}

void Rent::changeEndDate(string endDate) {
    //this->endDate=boost::posix_time::time_from_string(endDate);
}

PosixTime Rent::getStartDate(){
    return startDate;
}

PosixTime Rent::getEndDate() {
    return endDate;
}

/*int Rent::getRentPrice() {
    return getDuration()*room->getBasePrice()*client->getDiscount();
}*/

/*int Rent::getDuration(){
    return endDate-startDate;
}*/