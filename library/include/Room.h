#include <iostream>
#include "RoomType.h"

using namespace std;

#ifndef PROJEKTX_ROOM_H
#define PROJEKTX_ROOM_H

class Room{
private:
    int number;
    int floor;
    RoomType roomType;
public:
    Room(int,int,char);
    ~Room();
    int getBasePrice();
    string getRoomInfo();
    bool getSniadanie();
    void changeRoomType(char);
};

#endif //PROJEKTX_ROOM_H
