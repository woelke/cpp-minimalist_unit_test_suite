#ifndef  UT_BOOTSTRAP_HPP
#define  UT_BOOTSTRAP_HPP

#ifndef UNIT_TESTS
#define RUN_UNIT_TESTS_IF_ENABLED 
#else //UNIT_TESTS

#include "testing/ut_suite.hpp"
#include "testing/test_my_data.hpp"
#include "testing/test_my_data_advanced.hpp"

#define RUN_UNIT_TESTS_IF_ENABLED ut_bootstrap(); exit(0);

void ut_bootstrap(){
    ut_suite test_suite;
    
    test_suite.add_test_fun(test_my_data_1,4);
    test_suite.add_test_fun(test_my_data_2,1);
    test_suite.add_test_fun(test_my_data_3,2);
    test_suite.add_test_fun(test_my_data_4,1);
    test_suite.add_test_fun(test_my_data_advanced_functions());

    test_suite.run_test_suite();
}


#endif //UNIT_TESTS

#endif //UT_BOOTSTRAP_HPP
