#include "ExceptionRoom.h"

ExceptionRoom::ExceptionRoom(string message):Exception(),
    logic_error(getMessage()+"w Room "+message)
{}

