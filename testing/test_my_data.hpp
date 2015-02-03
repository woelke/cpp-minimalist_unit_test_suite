#ifndef  TEST_MY_DATA 
#define  TEST_MY_DATA

//#define UNIT_TESTS
#ifdef UNIT_TESTS

#include "testing/ut_bootstrap.hpp"
#include "include/my_data.hpp"
#include <unistd.h>

test_status test_my_data_1()
{
    UT_INITIALISATION;

    sleep(2);
    my_data d(1,"hallo"); 

    UT_CHECK(d.get_number() == 1);
    UT_CHECK(d.get_number() == 0);
    UT_CHECK(d.get_name().compare("hallo") == 0);

    d.set_number(2);
    UT_REQUIRE(d.get_number() == 2);
    UT_REQUIRE(d.get_name().compare("hallo") == 0);
    
    d.set_name("test");
    UT_CHECK(d.get_number() == 2);
    UT_CHECK(d.get_name().compare("test") == 0);

    UT_ERROR("ups failed, sorry");

    UT_FAIL("ups, I have to force quit");

    UT_SUMMARY;
}


test_status test_my_data_2()
{
    UT_INITIALISATION;

    sleep(1);
    my_data d(1,"hallo"); 

    UT_CHECK(d.get_number() == 1);
    UT_CHECK(d.get_name().compare("hallo") == 0);

    d.set_number(2);
    UT_REQUIRE(d.get_number() == 4);
    UT_REQUIRE(d.get_name().compare("hallo") == 0);
    
    UT_SUMMARY;
}


test_status test_my_data_3()
{
    UT_INITIALISATION;

    sleep(1);
    my_data d(1,"hallo"); 

    UT_CHECK(d.get_number() == 1);
    UT_CHECK(d.get_name().compare("hallo") == 0);

    d.set_number(2);
    UT_REQUIRE(d.get_number() == 2);
    UT_REQUIRE(d.get_name().compare("hallo") == 0);
    
    UT_SUMMARY;
}


test_status test_my_data_4()
{
    UT_INITIALISATION;

    sleep(1);
    my_data d(1,"hallo"); 

    UT_CHECK(d.get_number() == 1);
    UT_CHECK(d.get_name().compare("hallo") == 0);

    d.set_number(2);
    UT_REQUIRE(d.get_number() == 2);
    UT_REQUIRE(d.get_name().compare("hallo") == 0);
    
    //throw 1;

    UT_SUMMARY;
}
#endif //UNIT_TESTS

#endif //TEST_MY_DATA
