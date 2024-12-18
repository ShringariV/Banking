cmake_minimum_required(VERSION 3.28)
project(Banking)

set(CMAKE_CXX_STANDARD 17)

add_executable(Banking main.cpp
        BankSystem.h
        BankAccount.h
        BankSystem.cpp
        BankAccount.cpp)
