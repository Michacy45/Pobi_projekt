#include <boost/test/unit_test.hpp>
#include "Client.h"
#include "Person.h"
#include "Company.h"

BOOST_AUTO_TEST_SUITE(ClientTestSuite)

    BOOST_AUTO_TEST_CASE(PersonNamesCase) {
        Person person ("Adam", "Jóźwiak");
        BOOST_REQUIRE_EQUAL(person.getName(), "Adam");
        BOOST_REQUIRE_EQUAL(person.getLastName(), "Jóźwiak");
        BOOST_REQUIRE_GT(person.getDiscount(), 0);
        BOOST_TEST_MESSAGE(person.getID());
        BOOST_TEST_MESSAGE(person.getClientInfo());
    }

    BOOST_AUTO_TEST_CASE(CompanyNameCase) {
        Company company ("SpaceX");
        BOOST_REQUIRE_EQUAL(company.getName(), "SpaceX");
        BOOST_REQUIRE_GT(company.getDiscount(), 0);
        BOOST_TEST_MESSAGE(company.getID());
        BOOST_TEST_MESSAGE(company.getClientInfo());
    }

BOOST_AUTO_TEST_SUITE_END()