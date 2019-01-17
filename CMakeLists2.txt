cmake_minimum_required(VERSION 3.12)
project(ProjektX)

set(CMAKE_CXX_STANDARD 14)

include_directories(library/include)
include_directories(library/src)
include_directories(program/src)
add_executable(ProjektX
        program/src/main.cpp
        library/include/Client.h
        library/include/Rent.h
        library/include/Room.h
        library/include/RoomType.h
        library/src/Client.cpp
        library/src/Rent.cpp
        library/src/Room.cpp
        library/src/RoomType.cpp
        library/include/Person.h
        library/src/Person.cpp
        library/include/Company.h
        library/src/Company.cpp
        library/include/ClientsRepository.h
        library/src/ClientsRepository.cpp
        library/include/RentsRepository.h
        library/src/RentsRepository.cpp
        library/include/RoomRepository.h
        library/src/RoomRepository.cpp
        library/include/RoomsManager.h
        library/src/RoomsManager.cpp
        library/include/ClientsManager.h
        library/src/ClientsManager.cpp
        library/include/Reception.h
        library/src/Reception.cpp)