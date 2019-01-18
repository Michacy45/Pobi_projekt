#include "ExceptionRent.h"

ExceptionRent::ExceptionRent(string message):Exception(),
    logic_error(getMessage()+"W RENT: "+message)
    {}
