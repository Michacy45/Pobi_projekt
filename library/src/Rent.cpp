#include <utility>

#include <utility>

#include "Rent.h"
#include "Client.h"

Rent::Rent(shared_ptr<Client> client, shared_ptr<Room> room, int startDate, int endDate) {
    this->client= client;
    this->room= room;
    this->startDate=startDate;                                                 //boost::posix_time::second_clock::local_time();
    this->endDate=endDate;
    //endDate = boost::posix_time::time_from_string(sEndDate);
    //shared_ptr<Rent> rent ;
    //this->client->addRent(rent);
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

double Rent::getRentPrice() {
    return getDuration()*room->getBasePrice()*client->getDiscount();
}

int Rent::getDuration(){
    return endDate-startDate;
}