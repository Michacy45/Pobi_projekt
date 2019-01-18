#include "Room.h"

Room::Room(int number, int floor, char type) {
    this->number=number;
    this->floor=floor;
    roomType.changeType(type);
}

int Room::getBasePrice() {
    return roomType.getPrice();
}

string Room::getRoomInfo() {
    ostringstream sout;
    sout<< "Pokój -> Numer: "<< number << " , Piętro: "<< floor <<" "<<roomType.getRoomTypeInfo();
    return sout.str();
}

bool Room::getSniadanie() {
    return roomType.getSniadanie();
}

void Room::changeRoomType(char type) {
    roomType.changeType(type);
}

int Room::getNumber() {
    return number;
}

char Room::getType() {
    return roomType.getType();
}