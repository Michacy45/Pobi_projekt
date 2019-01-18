#include "RoomsManager.h"

void RoomsManager::createRoom(int number, int floor, char type) {

    if(number<=0 || floor<0) throw ExceptionRoom("Niewlasciwe liczby");
    shared_ptr<Room> room (new Room(number,floor,type));
    if(!checkRoom(number))
        roomRepository.addRoom(room);
}

void RoomsManager::createRoom(shared_ptr<Room> room) {
    roomRepository.addRoom(room);
}

bool RoomsManager::checkRoom(shared_ptr<Room> room) {
    return roomRepository.checkRoom(room);
}

bool RoomsManager::checkRoom(int number) {
    return roomRepository.checkRoom(number);
}

void RoomsManager::changeRoomType(shared_ptr<Room> room, char type) {
    room->changeRoomType(type);
}

void RoomsManager::destroyRoom(shared_ptr<Room> room) {
    roomRepository.removeRoom(room);
}

shared_ptr<Room> RoomsManager::getRoom(int number) {
    return roomRepository.getRoom(number);
}

char RoomsManager::getType(shared_ptr<Room> room) {
    return room->getType();
}