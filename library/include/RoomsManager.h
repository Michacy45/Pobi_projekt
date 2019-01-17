#ifndef PROJEKTX_ROOMSMANAGER_H
#define PROJEKTX_ROOMSMANAGER_H

#include "RoomRepository.h"
using namespace std;

class RoomsManager {
private:
    RoomRepository roomRepository;
public:
    bool checkRoom(shared_ptr<Room>);
    bool checkRoom(int);
    void changeRoomType(shared_ptr<Room>,char);
    void createRoom(char,int,int);
    void createRoom(shared_ptr<Room>);
    void destroyRoom(shared_ptr<Room>);
    shared_ptr<Room> getRoom(int);
};
#endif