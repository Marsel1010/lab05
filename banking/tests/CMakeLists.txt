# Тест на Account
add_executable(AccountTest
    AccountTest.cpp
)

# Тест на Transaction
add_executable(TransactionTest
    TransactionTest.cpp
)

# Подключаем библиотеку и GTest
target_link_libraries(AccountTest
    banking
    GTest::gtest_main
)

target_link_libraries(TransactionTest
    banking
    GTest::gtest_main
)

# Активируем автоматический поиск тестов
include(GoogleTest)
gtest_discover_tests(AccountTest)
gtest_discover_tests(TransactionTest)
