#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Transaction.h"

// Создаем mock-класс для Transaction
class MockTransaction : public Transaction {
public:
    MOCK_METHOD(void, process, (), (override));
};

// Тестируем метод process
TEST(TransactionTest, ProcessTransaction) {
    MockTransaction mockTransaction;
    EXPECT_CALL(mockTransaction, process());

    mockTransaction.process();
}

