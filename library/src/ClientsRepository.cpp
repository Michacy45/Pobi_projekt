#include "ClientsRepository.h"

void ClientsRepository::addClient(shared_ptr<Client> client) {
    bool bodyguard = true;
    for(auto it:clients)
    {
        if(it==client)
        {
            bodyguard = false;
        }
    }
    if(bodyguard)
    {
        clients.push_back(client);
    }
}

void ClientsRepository::removeClient(shared_ptr<Client> client) {
    for(auto it=clients.begin(); it!=clients.end(); it++)
    {
        if((*it)==client)
        {
            it=clients.erase(it);
        }
    }
}

void ClientsRepository::removeClient(int clientID) {
    for(auto it=clients.begin(); it!=clients.end(); it++)
    {
        if((*it)->getID() == clientID)
        {
            it=clients.erase(it);
        }
    }
}

string ClientsRepository::returnAllClientInfo() {
    ostringstream info;
    for(auto it=clients.begin(); it!=clients.end(); it++) {
        info << (*it)->getClientInfo();
    }
    return info.str();
}

bool ClientsRepository::checkClient(shared_ptr<Client> client)
{
    for (auto &it : clients) {
        if(it == client)
        {
            return true;
        }
    }
    return false;
}