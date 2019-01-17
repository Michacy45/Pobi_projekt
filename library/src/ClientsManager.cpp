#include "ClientsManager.h"

void ClientsManager::addClient(shared_ptr<Client> client) {
    clientsRepository.addClient(client);
}

bool ClientsManager::checkClient(shared_ptr<Client> client) {
    return clientsRepository.checkClient(client);
}

void ClientsManager::removeClient(shared_ptr<Client> client) {
    clientsRepository.removeClient(client);
}

void ClientsManager::removeClient(boost::uuids::uuid clientID) {
    clientsRepository.removeClient(clientID);
}