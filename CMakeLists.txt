cmake_minimum_required(VERSION 3.17)
project(labs C)

set(CMAKE_C_STANDARD 11)

add_executable(labs introduction/src/main.c
        introduction/src/function.c
        introduction/headers/function.h
        sapi_sales/src/manager/lab2.c
        sapi_sales/headers/manager/lab2.h
        sapi_sales/src/manager/lab_manager.c
        sapi_sales/headers/manager/lab_manager.h
        sapi_sales/src/models/product.c
        sapi_sales/headers/models/product.h
        sapi_sales/src/models/user.c
        sapi_sales/headers/models/user.h
        shared/src/errors.c
        shared/headers/errors.h
        shared/headers/constans.h
        sapi_sales/src/main.c sapi_sales/src/array/user_array.c sapi_sales/headers/array/user_array.h sapi_sales/src/array/product_array.c sapi_sales/headers/array/product_array.h sapi_sales/src/manager/lab4.c sapi_sales/headers/manager/lab4.h)
include_directories(introduction/headers
        sapi_sales/headers/manager
        sapi_sales/headers/models
        shared/headers
        sapi_sales/headers/array
        
        )