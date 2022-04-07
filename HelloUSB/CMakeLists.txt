# What CMake to start at
cmake_minimum_required(VERSION 3.12)
 
# Include the subsidiary .cmake file to get the SDK
include(pico_sdk_import.cmake)
 
# Set the name and version of the project
project(HelloUSB VERSION 1.0.0)
 
# Link the Project to a source file (step 4.6)
add_executable(HelloUSB source.c)
 
# Link the Project to an extra library (pico_stdlib)
target_link_libraries(HelloUSB pico_stdlib)
 
# Initalise the SDK
pico_sdk_init()
 
# Enable USB, UART output
pico_enable_stdio_usb(HelloUSB 1)
pico_enable_stdio_uart(HelloUSB 1)
 
# Enable extra outputs (SWD?)
pico_add_extra_outputs(HelloUSB)
