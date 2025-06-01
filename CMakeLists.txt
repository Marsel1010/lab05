cmake_minimum_required(VERSION 3.10)
project(banking)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Покрытие кода
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")

# GTest: автоматическая загрузка
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Подключаем подкаталоги
add_subdirectory(banking)
add_subdirectory(banking/tests)
option(CODE_COVERAGE "Enable coverage reporting" ON)

if(CODE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(--coverage)
    add_link_options(--coverage)
endif()
