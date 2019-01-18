#include "Rent.h"
#include "Client.h"

Rent::Rent(shared_ptr<Client> client, shared_ptr<Room> room, string sEndDate) {
    this->client= client;
    this->room= room;
    this->startDate=boost::posix_time::second_clock::local_time();
    endDate = boost::posix_time::time_from_string(sEndDate);
}

shared_ptr<Client> Rent::getClient() {
    return client;
}

shared_ptr<Room> Rent::getRoom() {
    return room;
}

void Rent::changeEndDate(string endDate) {
    this->endDate=boost::posix_time::time_from_string(endDate);
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
    boost::posix_time::time_duration diff = endDate-startDate;
    ostringstream difference;
    difference << diff;
    string pom = difference.str();
    string pom1 = pom.substr(0,pom.find(':'));
    int hours = stoi(pom1);
    int days = hours/24;

    return days;
}