#include "RoomRepository.h"

void RoomRepository::addRoom(shared_ptr<Room> room) {
    bool bodyguard = true;

    for(auto it:rooms)
    {
        if(it == room)
        {
            bodyguard = false;
        }
    }

    if(bodyguard)
    {
        rooms.push_back(room);
    }
}

void RoomRepository::removeRoom(shared_ptr<Room> room) {
    for(auto it=rooms.begin(); it!=rooms.end(); it++)
    {
        if((*it) == room)
        {
            it = rooms.erase(it);
        }
    }
}

bool RoomRepository::checkRoom(shared_ptr<Room> room) {
    for(auto it:rooms)
    {
        if(it == room)
        {
            return true;
        }
    }

    return false;
}

bool RoomRepository::checkRoom(int roomNumber) {
    for(auto it=rooms.begin(); it!=rooms.end(); it++)
    {
        if((*it)->getNumber() == roomNumber)
        {
            return true;
        }
    }
    return false;
}