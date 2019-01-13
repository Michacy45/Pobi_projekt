#include "RoomType.h"

/*RoomType::RoomType(char type) {
    changeType(type);
}*/

void RoomType::changeType(char type) {
    this->type=type;
    switch (type){
        case 'A':
            price=150;
            sniadanie=true;
            break;

        case 'B':
            price=120;
            sniadanie=true;
            break;

        case 'C':
            price=100;
            sniadanie=false;
            break;

        case 'D':
            price=80;
            sniadanie=false;
            break;
    }
}

int RoomType::getPrice() {
    return price;
}

bool RoomType::getSniadanie() {
    return sniadanie;
}

string RoomType::getRoomTypeInfo() {
    ostringstream sout;
    //costam
    return sout.str();
}


