#include <gtest/gtest.h>
#include "Account.h"

TEST(AccountTest, DepositIncreasesBalance) {
    Account acc;
    acc.deposit(100.0);
    EXPECT_EQ(acc.getBalance(), 100.0);
}

TEST(AccountTest, WithdrawDecreasesBalance) {
    Account acc;
    acc.deposit(100.0);
    acc.withdraw(30.0);
    EXPECT_EQ(acc.getBalance(), 70.0);
}
