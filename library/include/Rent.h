#ifndef PROJEKT_X_RENT_H
#define PROJEKT_X_RENT_H

#include "Room.h"
#include <memory>
#include <string>
#include <list>
#include "boost/date_time/posix_time/posix_time.hpp"
#include "boost/date_time/local_time/local_time.hpp"
#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/random_generator.hpp>

typedef boost::posix_time::ptime PosixTime;

using namespace std;

class Client;

class Rent{
private:
    shared_ptr<Client> client;
    shared_ptr<Room> room;
    PosixTime startDate;
    PosixTime endDate;
public:
    Rent(shared_ptr<Client>, shared_ptr<Room>, string/*, int, int*/);
    shared_ptr<Client> getClient();
    shared_ptr<Room> getRoom();
    string getRentInfo();
    void changeEndDate(string);
    PosixTime getStartDate();
    PosixTime getEndDate();
    int getRentPrice();
    int getDuration();

};

#endif
