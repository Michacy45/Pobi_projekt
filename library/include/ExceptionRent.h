
#ifndef PROJEKTX_EXCEPTIONRENT_H
#define PROJEKTX_EXCEPTIONRENT_H

#include "Exception.h"
using namespace std;

class ExceptionRent: public Exception, public logic_error{
public:
    ExceptionRent(string message);
};

#endif //PROJEKTX_EXCEPTIONRENT_H
