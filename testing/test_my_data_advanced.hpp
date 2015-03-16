#ifndef  TEST_MY_DATA_ADVANCED_HPP
#define  TEST_MY_DATA_ADVANCED_HPP

#ifdef UNIT_TESTS

#include "testing/ut_bootstrap.hpp"
#include "testing/ut_suite.hpp"

#include "include/my_data.hpp"

#include <list>
#include <tuple>
#include <memory>
#include <unistd.h> //sleep


class test_my_data_advanced
{
public:

    std::unique_ptr<my_data> get_my_data(int x){
        UT_INITIALISATION; //to initalise UT_ERROR() and UT_FAIL()
        
        std::unique_ptr<my_data> d;

        try{
            d = std::unique_ptr<my_data>(new my_data(x,"")); //42 is not allowed
        }catch(const char * e){
            UT_ERROR("(ERROR) Could not create my_data: " << e); 
            UT_FAIL("(FAIL) Could not create my_data: " << e); //will throw an error
        }


        // UT_SUMMARY; not necessary
        return std::move(d);
    }

    test_status test_my_data_number() {
        UT_INITIALISATION;
        
        auto d = get_my_data(42);
        sleep(1);

        UT_CHECK(d->m_number == 42); //should not be reachable


        UT_SUMMARY;
    }


};


std::list<std::tuple<ut_test_fun, ut_effort>> test_my_data_advanced_functions()
{
    test_my_data_advanced d;

    return std::list<std::tuple<ut_test_fun, ut_effort>> {
        std::make_tuple([&d]() {
            return d.test_my_data_number();
        }, 1)
    };
}


#endif //UNIT_TESTS

#endif //TEST_MY_DATA_ADVANCED_HPP
