#pragma once

#include "Transaction.h"
#include <gmock/gmock.h>

class MockTransaction : public Transaction {
public:
    MOCK_METHOD(void, process, (), (override));
};
