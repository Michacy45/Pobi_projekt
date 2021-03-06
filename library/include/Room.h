#ifndef PROJEKTX_ROOM_H
#define PROJEKTX_ROOM_H

#include <iostream>
#include "RoomType.h"

using namespace std;

class Room{
private:
    int number;
    int floor;
    RoomType roomType;
public:
    Room(int,int,char);
    int getBasePrice();
    string getRoomInfo();
    bool getSniadanie();
    void changeRoomType(char);
    int getNumber();
    char getType();
};

#endif
