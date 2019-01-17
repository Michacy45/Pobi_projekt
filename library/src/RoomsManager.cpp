#include "RoomsManager.h"

void RoomsManager::createRoom(char type, int number, int floor) {
    shared_ptr<Room> room (new Room(type,number,floor));
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