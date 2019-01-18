#include <boost/test/unit_test.hpp>
#include "ClientsManager.h"
#include "Person.h"

BOOST_AUTO_TEST_SUITE(ClientsManagerTestSuite)

    BOOST_AUTO_TEST_CASE(ClientsManagerTestCase) {

    ClientsManager clientsmanager;
    shared_ptr<Person> person (new Person("Piotr", "Chmielak"));
    shared_ptr<Person> person1 (new Person("Paweł", "Białek"));

    clientsmanager.addClient(person);

    BOOST_REQUIRE_EQUAL(clientsmanager.checkClient(person), true);
    BOOST_REQUIRE_EQUAL(clientsmanager.checkClient(person1), false);

    clientsmanager.removeClient(person);
    clientsmanager.addClient(person1);

    BOOST_REQUIRE_EQUAL(clientsmanager.checkClient(person), false);
    BOOST_REQUIRE_EQUAL(clientsmanager.checkClient(person1), true);

    }

BOOST_AUTO_TEST_SUITE_END()

