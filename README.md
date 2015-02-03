Minimalist C++ Unit Test Suite
==============================
This Unit Test Suite based on the idea of the [Boost Test Library](http://www.boost.org/doc/libs/1_57_0/libs/test/doc/html/index.html) but  has no Boost dependencies. The Minimalist C++ Unit Test Suite provide 4 different test functions which test given expression and print the result in an clean and ordered fashion. As any other suitable unit test library it separates the operational code from the test code and don't increase the binary size of the release version.

![Unit Test Suite demo](https://github.com/aufgang001/cpp-minimalist_unit_test_suite/blob/master/images/unit_test_demo.gif)

Architecture
============

    - ut_bootstrap
    - ut_suite
        - ut_minimal 

* **ut_bootstrap** collects a arbitrary number of test units (a method, which tests a particular functionality of a program) and prepare them for testing.
* **ut_minimal** defines test functions, which can be composed to a test unit. If a whole test suite is not required, the test functions can be used standalone.
* **ut_suite** manages and runs the test process.


Test Functions
==============
* **UT_CHECK(expression)**: verifies the expression of correctness, a wrong expression will be exposed
* **UT_REQUIRE(expression)**: verifies the expression of correctness, a wrong expression will be exposed and leads to abortion of the test unit
* **UT_ERROR(message)**: prints an error message
* **UT_FAIL(message)**: print an error message and abort the test unit


How to use this test suite in your program
==========================================
* Copy the folder testing in to your project.
* Past the Macro **RUN_UNIT_TESTS_IF_ENABLED** (defined in [ut_bootstrap.hpp](testing/ut_bootstrap.hpp)) in your main Function.
    * If **UNIT_TESTS** is defined only the test suite will be executed.
* Define your own test units (example: [test_my_data.hpp](testing/test_my_data.hpp)).
* Collect all test units in ut_bootstrap.hpp.


Run the example
===============
Requirements: qt5-qmake or qt4-qmake

    sudo apt-get install qt5-qmake
    sudo apt-get install qt5-default
    #or
    sudo apt-get install qt4-qmake

Create makefile and compile

    qmake #without test suite
    #or
    qmake DEFINES+=UNIT_TESTS #compiled with test suite
    
    make
    ./program
