# Добавляем исходники тестов
add_executable(AccountTest 
    AccountTest.cpp 
    MockAccount.h 
)

add_executable(TransactionTest 
    TransactionTest.cpp 
    MockTransaction.h 
)

# Ссылаемся на библиотеку banking
target_link_libraries(AccountTest banking GTest::GTest GTest::Main)
target_link_libraries(TransactionTest banking GTest::GTest GTest::Main)

# Устанавливаем флаг для покрытия кода
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")

# Активируем тесты
include(GoogleTest)
gtest_discover_tests(AccountTest)
gtest_discover_tests(TransactionTest)
