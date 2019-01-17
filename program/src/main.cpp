#include <iostream>
#include "Client.h"
#include "Person.h"
#include "Company.h"
#include "ClientsManager.h"
#include "RoomsManager.h"
#include "Reception.h"
using namespace std;

int main(){

    shared_ptr<Person> client1 (new Person("Piotr","Wroblewski",1));

    RoomsManager roomsManager;
    ClientsManager clientsManager;

    clientsManager.addClient(client1);

    roomsManager.createRoom(69,3,'B');
    Reception reception;
    cout<<roomsManager.getRoom(69)->getBasePrice();
    //Rent rent(client1,roomsManager.getRoom(69),1,4);
    reception.createRent(client1,roomsManager.getRoom(69),1,4);
    cout<<roomsManager.getRoom(69)->getBasePrice();

    cout<<reception.getRentPrice(reception.getRent(roomsManager.getRoom(69)));
    cout<<"tescik";

    return 0;
}

