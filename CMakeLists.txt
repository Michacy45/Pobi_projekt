cmake_minimum_required(VERSION 3.12)
project(ProjektX)

set(CMAKE_CXX_STANDARD 14)

include_directories(library/include)

add_executable(ProjektX
        library/include/Client.h
        library/include/ClientsManager.h
        library/include/ClientsRepository.h
        library/include/Company.h
        library/include/Person.h
        library/include/Reception.h
        library/include/Rent.h
        library/include/RentsRepository.h
        library/include/Room.h
        library/include/RoomRepository.h
        library/include/RoomsManager.h
        library/include/RoomType.h
        library/src/Client.cpp
        library/src/ClientsManager.cpp
        library/src/ClientsRepository.cpp
        library/src/Company.cpp
        library/src/Person.cpp
        library/src/Reception.cpp
        library/src/Rent.cpp
        library/src/RentsRepository.cpp
        library/src/Room.cpp
        library/src/RoomRepository.cpp
        library/src/RoomsManager.cpp
        library/src/RoomType.cpp
        program/src/main.cpp)
