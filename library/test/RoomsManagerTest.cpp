#include <boost/test/unit_test.hpp>
#include "RoomsManager.h"

BOOST_AUTO_TEST_SUITE(RoomManagerTestSuite)

    BOOST_AUTO_TEST_CASE(RoomManagerTestCase) {

        RoomsManager roomsmanager;
        roomsmanager.createRoom(100, 5, 'A');

        shared_ptr<Room> room = roomsmanager.getRoom(100);

        BOOST_REQUIRE_EQUAL(roomsmanager.checkRoom(room), true);
        BOOST_REQUIRE_EQUAL(roomsmanager.checkRoom(100), true);

        shared_ptr<Room> room1 (new Room(13,1,'D'));
        roomsmanager.createRoom(room1);

        BOOST_REQUIRE_EQUAL(roomsmanager.checkRoom(room1), true);
        BOOST_REQUIRE_EQUAL(roomsmanager.checkRoom(13), true);

        roomsmanager.destroyRoom(room);

        BOOST_REQUIRE_EQUAL(roomsmanager.checkRoom(room), false);
        BOOST_REQUIRE_EQUAL(roomsmanager.checkRoom(100), false);

        roomsmanager.changeRoomType(room1, 'A');

        BOOST_REQUIRE_EQUAL(roomsmanager.getType(room1), 'A');
    }

    BOOST_AUTO_TEST_CASE(RoomManagerException) {

        RoomsManager roomsmanager;

        BOOST_CHECK_THROW(roomsmanager.createRoom(-100, 5, 'A'),ExceptionRoom);
        BOOST_CHECK_THROW(roomsmanager.createRoom(100, -5, 'A'),ExceptionRoom);



    }

BOOST_AUTO_TEST_SUITE_END()
