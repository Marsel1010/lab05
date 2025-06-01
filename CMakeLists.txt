cmake_minimum_required(VERSION 3.10)
project(banking)

# Указываем стандарт C++
set(CMAKE_CXX_STANDARD 17)

# Указываем папку с исходниками
add_subdirectory(banking)

# Добавляем тесты
enable_testing()
add_subdirectory(banking/tests)
