//
// Created by pobi on 18.01.19.
//

#ifndef PROJEKTX_EXCEPTIONROOM_H
#define PROJEKTX_EXCEPTIONROOM_H

#include "Exception.h"
using namespace std;

class ExceptionRoom: public Exception, public logic_error{
public:
    ExceptionRoom(string message);
};

#endif //PROJEKTX_EXCEPTIONROOM_H
