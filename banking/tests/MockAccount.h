#pragma once

#include "Account.h"
#include <gmock/gmock.h>

class MockAccount : public Account {
public:
    MOCK_METHOD(void, deposit, (double amount), (override));
    MOCK_METHOD(void, withdraw, (double amount), (override));
};
