#ifndef PROJEKTX_ROOMTYPE_H
#define PROJEKTX_ROOMTYPE_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class RoomType{
private:
    char type;
    int price;
    bool sniadanie;
public:
    //RoomType();
    ~RoomType();
    void changeType(char);
    int getPrice();
    bool getSniadanie();
    string getRoomTypeInfo();

};
#endif //PROJEKTX_ROOMTYPE_H
