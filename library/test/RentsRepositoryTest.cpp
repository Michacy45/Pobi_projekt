#include <boost/test/unit_test.hpp>
#include "RentsRepository.h"
#include "Rent.h"
#include "Room.h"
#include "Person.h"
#include "Company.h"


BOOST_AUTO_TEST_SUITE(RentsRepositoryTestSuite)

    BOOST_AUTO_TEST_CASE(RentsRepositoryTestCase) {

        RentsRepository rentsrepository;
        shared_ptr<Company> company (new Company("Rolex"));
        shared_ptr<Person> person (new Person("Łukasz", "Kostrzewa"));
        shared_ptr<Room> room (new Room(55, 4, 'B'));
        shared_ptr<Room> room1 (new Room(155, 7, 'A'));
        shared_ptr<Rent> rent (new Rent(company,room,"2019-01-25 23:59:59.000"));
        shared_ptr<Rent> rent1 (new Rent(person,room1,"2019-01-23 23:59:59.000"));

        rentsrepository.addRent(rent);
        rentsrepository.addRent(rent1);

        BOOST_REQUIRE_EQUAL(rentsrepository.checkRent(room), true);

        rentsrepository.addRent(rent);

        BOOST_REQUIRE_EQUAL(rentsrepository.getRent(room), rent);
        BOOST_REQUIRE_EQUAL(rentsrepository.returnRentForClient(company), rent);

        rentsrepository.removeRent(rent);

        BOOST_REQUIRE_EQUAL(rentsrepository.checkRent(room), false);
        BOOST_REQUIRE_EQUAL(rentsrepository.getRent(room1), rent1);
        BOOST_REQUIRE_EQUAL(rentsrepository.returnRentForClient(person), rent1);


    }

BOOST_AUTO_TEST_SUITE_END()
