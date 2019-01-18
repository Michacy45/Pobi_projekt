#include <boost/test/unit_test.hpp>
#include "ClientsRepository.h"
#include "Person.h"

BOOST_AUTO_TEST_SUITE(ClientsRepositoryTestSuite)

    BOOST_AUTO_TEST_CASE(ClientsRepositoryTestCase) {

    ClientsRepository clientsrepository;
    shared_ptr<Person> person (new Person("Michał", "Pęśko"));

    clientsrepository.addClient(person);

    BOOST_REQUIRE_EQUAL(clientsrepository.checkClient(person), true);
    BOOST_TEST_MESSAGE(clientsrepository.returnAllClientInfo());

    clientsrepository.removeClient(person);

    BOOST_REQUIRE_EQUAL(clientsrepository.checkClient(person), false);

    }

BOOST_AUTO_TEST_SUITE_END()