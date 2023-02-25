cmake_minimum_required(VERSION 3.16.3)
project(smsDevices)

set(CMAKE_CXX_STANDARD 17)

add_executable(smsDevices main.cpp main.cpp serial.cpp serial.h)
