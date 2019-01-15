#ifndef PROJEKTX_ROOMREPOSITORY_H
#define PROJEKTX_ROOMREPOSITORY_H

#include "Room.h"
#include <list>
#include <memory>

class RoomRepository {
private:
    list<shared_ptr<Room>> rooms;
public:
    void addRoom(shared_ptr<Room>);
    void removeRoom(shared_ptr<Room>);
    bool checkRoom(shared_ptr<Room>);
    bool checkRoom(int);
};
#endif
