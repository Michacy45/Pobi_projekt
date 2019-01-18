#include <boost/test/unit_test.hpp>
#include "RoomRepository.h"


BOOST_AUTO_TEST_SUITE(RoomRepositoryTestSuite)

    BOOST_AUTO_TEST_CASE(RoomRepositoryTestCase) {

        RoomRepository roomrepository;
        shared_ptr<Room> room1 (new Room(1,1,'C'));

        roomrepository.addRoom(room1);

        BOOST_REQUIRE_EQUAL(roomrepository.checkRoom(room1), true);
        BOOST_REQUIRE_EQUAL(roomrepository.checkRoom(1), true);
        BOOST_REQUIRE_EQUAL(roomrepository.getRoom(1), room1);

        roomrepository.removeRoom(room1);

        BOOST_REQUIRE_EQUAL(roomrepository.checkRoom(room1), false);
        BOOST_REQUIRE_EQUAL(roomrepository.checkRoom(1), false);
    }

BOOST_AUTO_TEST_SUITE_END()