#include "testing/ut_bootstrap.hpp"

#include <iostream>

#include <unistd.h>

int main(int, char**)
{
    RUN_UNIT_TESTS_IF_ENABLED;
    
    std::cout << "No tests Today!" << std::endl; 

    return 0;
}



