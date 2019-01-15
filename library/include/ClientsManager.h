#ifndef PROJEKTX_CLIENTSMANAGER_H
#define PROJEKTX_CLIENTSMANAGER_H

#include "ClientsRepository.h"
using namespace std;

class ClientsManager {
private:
    ClientsRepository clientsRepository;
public:
    bool checkClient(shared_ptr<Client>);
    void addClient(shared_ptr<Client>);
    void removeClient(shared_ptr<Client>);
    void removeClient(int);
};
#endif
