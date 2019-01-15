#ifndef PROJEKT_X_RENT_H
#define PROJEKT_X_RENT_H

#include "Room.h"
#include <memory>
#include <string>
#include <list>
using namespace std;

class Client;

class Rent{
private:
    shared_ptr<Client> client;
    shared_ptr<Room> room;
    int startDate;
    int endDate;
public:
    Rent(shared_ptr<Client>, shared_ptr<Room>, int, int);
    shared_ptr<Client> getClient();
    shared_ptr<Room> getRoom();
    string getRentInfo();
    void changeEndDate(int);
    int getStartDate();
    int getEndDate();
    int getRentPrice();
    int getDuration();

};

#endif
