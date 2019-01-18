#include "RentsRepository.h"

void RentsRepository::addRent(shared_ptr<Rent> rent) {
    bool bodyguard = true;
    for(auto it:rents)
    {
        if(it == rent)
        {
            bodyguard = false;
        }
    }

    if(bodyguard)
    {
        rents.push_back(rent);
    }
}

void RentsRepository::removeRent(shared_ptr<Rent> rent) {
    for(auto it=rents.begin(); it!=rents.end(); it++)
    {
        if((*it) == rent)
        {
            it = rents.erase(it);
        }
    }
}

shared_ptr<Rent> RentsRepository::returnRentForClient(shared_ptr<Client> client) {
    for(auto it=rents.begin(); it!=rents.end(); it++)
    {
        if((*it)->getClient() == client)
        {
            return *it;
        }
    }

    throw logic_error ("Nie ma takiego wypozyczenia");
}

bool RentsRepository::checkRent(shared_ptr<Room> room) {
    for(auto it=rents.begin(); it!=rents.end(); it++)
    {
        if((*it)->getRoom()==room) return true;
    }
    return false;
}

shared_ptr<Rent> RentsRepository::getRent(shared_ptr<Room> room) {
    for(auto it=rents.begin(); it!=rents.end(); it++)
    {
        if((*it)->getRoom()==room)
        {
            return *it;
        }
    }
    return nullptr;
}
