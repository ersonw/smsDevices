cmake_minimum_required(VERSION 2.8.12.2)
project(smsDevices)

set(CMAKE_CXX_STANDARD 17)

add_executable(smsDevices main.cpp main.cpp
        serial.cpp serial.h usb_serial.cpp usb_serial.h)
