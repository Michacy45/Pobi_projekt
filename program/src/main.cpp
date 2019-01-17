#include <iostream>
#include "Client.h"
#include "Person.h"
#include "Company.h"
#include "ClientsManager.h"
#include "RoomsManager.h"
#include "Reception.h"
using namespace std;

int main(){

    shared_ptr<Person> client1 (new Person("Piotr","Wroblewski"));
    shared_ptr<Company> client2 (new Company("SpaceX"));

    RoomsManager roomsManager;
    ClientsManager clientsManager;

    clientsManager.addClient(client1);
    clientsManager.addClient(client2);

    roomsManager.createRoom(69,3,'B');
    Reception reception;
    cout<<roomsManager.getRoom(69)->getBasePrice()<<endl;
    //Rent rent(client1,roomsManager.getRoom(69),1,4);
    reception.createRent(client1,roomsManager.getRoom(69), "2018-01-20 23:59:59.000");
    cout<<roomsManager.getRoom(69)->getBasePrice()<<endl;

    cout<<reception.getRentPrice(reception.getRent(roomsManager.getRoom(69)))<<endl;
    cout<<"tescik"<<endl;
    cout<<clientsManager.checkClient(client1)<<endl;
    cout<<client1->getClientInfo()<<endl;
    cout<<client2->getClientInfo()<<endl;
    cout<<clientsManager.checkClient(client2)<<endl;

    cout<<roomsManager.checkRoom(23)<<endl;

    cout<<reception.getRent(roomsManager.getRoom(69))->getStartDate()<<endl;
    cout<<reception.getRent(roomsManager.getRoom(69))->getEndDate()<<endl;

    return 0;
}

