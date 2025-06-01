#include <gtest/gtest.h>
#include "Account.h"

TEST(AccountTest, ChangeBalancePositive) {
    Account acc(1, 100);
    acc.Lock();
    acc.ChangeBalance(50);
    acc.Unlock();
    EXPECT_EQ(acc.GetBalance(), 150);
}

TEST(AccountTest, ChangeBalanceNegative) {
    Account acc(2, 200);
    acc.Lock();
    acc.ChangeBalance(-80);
    acc.Unlock();
    EXPECT_EQ(acc.GetBalance(), 120);
}

TEST(AccountTest, GetBalanceReturnsCorrectValue) {
    Account acc(3, 500);
    EXPECT_EQ(acc.GetBalance(), 500);
}

TEST(AccountTest, IdReturnsCorrectId) {
    Account acc(42, 0);
    EXPECT_EQ(acc.id(), 42);
}
