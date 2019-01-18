#include "Exception.h"
Exception::Exception() {
    message="UWAGA WYJATEK ";
}

string Exception::getMessage() {
    return message;
}
