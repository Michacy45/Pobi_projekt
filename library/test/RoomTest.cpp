#include <boost/test/unit_test.hpp>
#include "Room.h"

BOOST_AUTO_TEST_SUITE(RoomTestSuite)

    BOOST_AUTO_TEST_CASE(RoomTestCase) {

    shared_ptr<Room> room1 (new Room(1,1,'C'));
    shared_ptr<Room> room2 (new Room(256,10,'A'));

    BOOST_REQUIRE_EQUAL(room1->getNumber(), 1);
    BOOST_REQUIRE_EQUAL(room2->getNumber(), 256);
    BOOST_TEST_MESSAGE(room1->getRoomInfo());
    BOOST_REQUIRE_EQUAL(room1->getSniadanie(), false);
    BOOST_REQUIRE_EQUAL(room2->getSniadanie(), true);
    BOOST_TEST_MESSAGE(room2->getRoomInfo());
    BOOST_REQUIRE_EQUAL(room1->getBasePrice(), 100);
    BOOST_REQUIRE_EQUAL(room2->getBasePrice(), 150);

    room1->changeRoomType('B');

    BOOST_REQUIRE_EQUAL(room1->getBasePrice(), 120);
    BOOST_REQUIRE_EQUAL(room1->getType(), 'B');

}

BOOST_AUTO_TEST_SUITE_END()