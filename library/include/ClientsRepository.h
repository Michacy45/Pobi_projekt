#ifndef PROJEKTX_CLIENTSREPOSITORY_H
#define PROJEKTX_CLIENTSREPOSITORY_H

#include "Client.h"
using namespace std;

class ClientsRepository {
private:
    list<shared_ptr<Client>> clients;
public:
    void addClient(shared_ptr<Client>);
    void removeClient(shared_ptr<Client>);
    void removeClient(boost::uuids::uuid);
    string returnAllClientInfo();
    bool checkClient(shared_ptr<Client>);
};
#endif
