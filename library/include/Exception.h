
#ifndef PROJEKTX_EXCEPTION_H
#define PROJEKTX_EXCEPTION_H

#include <iostream>
#include <string>
using namespace std;

class Exception{
private:
    string message;
public:
    Exception();
    string getMessage();

};

#endif //PROJEKTX_EXCEPTION_H
