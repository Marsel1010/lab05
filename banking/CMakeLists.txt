# Создаем статическую библиотеку banking
add_library(banking STATIC
    Account.cpp
    Transaction.cpp
)

# Заголовочные файлы доступны другим
target_include_directories(banking PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
