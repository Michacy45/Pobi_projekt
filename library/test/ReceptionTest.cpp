#include <boost/test/unit_test.hpp>
#include "Reception.h"
#include "Person.h"

BOOST_AUTO_TEST_SUITE(ReceptionTestSuite)

    BOOST_AUTO_TEST_CASE(ReceptionTestCase) {

            Reception reception;
            shared_ptr<Person> person(new Person("Michal", "Pesko"));
            shared_ptr<Room> room(new Room(32, 2, 'D'));
            reception.createRent(person, room, "2019-01-20 23:59:59.000");
            BOOST_REQUIRE_EQUAL(reception.getRentPrice(reception.getRent(room)), 160);
            BOOST_CHECK_THROW(reception.createRent(nullptr, room, "2019-01-20 23:59:59.000"), ExceptionRent);
            BOOST_CHECK_THROW(reception.createRent(person, nullptr, "2019-01-20 23:59:59.000"), ExceptionRent);
            BOOST_CHECK_THROW(reception.createRent(person, room, "2019-01-20 23:59:59.000"), ExceptionRent);

    }

BOOST_AUTO_TEST_SUITE_END()

