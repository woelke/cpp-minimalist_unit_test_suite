#-------------------------------------------------
#
# Project: Minimalist C++ Test Suite
#
#-------------------------------------------------

#QMAKE_CXX = clang
#QMAKE_CC = clang

#CONFIG += release    
CONFIG += debug   
QMAKE_CXXFLAGS_DEBUG -= -g 
QMAKE_CXXFLAGS_DEBUG += -std=c++11
DEPENDPATH += . #include header files as dependency
 
CONFIG -= qt
QMAKE_CXXFLAGS += -ggdb 
QMAKE_CXXFLAGS += -Wpedantic 


TARGET = program 

SOURCES += src/main.cpp

HEADER += include/my_data.hpp \
          testing/ut_minimal.hpp \
          testing/ut_sutie.hpp \
          testing/ut_bootstrap.hpp \
          testing/test_my_data.hpp \
          testing/test_my_data_advanced.hpp

