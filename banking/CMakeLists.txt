# Указываем, что это библиотека
add_library(banking STATIC 
    Account.cpp 
    Transaction.cpp
)

# Указываем директории для заголовочных файлов
target_include_directories(banking PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Находим и подключаем GoogleTest
find_package(GTest REQUIRED)
target_link_libraries(banking GTest::GTest GTest::Main)
