cmake_minimum_required(VERSION 3.10)

project(linuxapi-test C)

find_package(linuxapi REQUIRED)

add_executable(test1 main.c)
target_include_directories(test1 PRIVATE ${linuxapi_INCLUDE_DIR})

add_executable(test2 main.c)
target_link_libraries(test2 PRIVATE linuxapi::linuxapi)

linuxapi_enable_for(main2.c)
add_executable(test3 main2.c)
