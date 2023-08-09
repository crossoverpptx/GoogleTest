#ifndef MOCKUSER_H
#define MOCKUSER_H

#include "User.h"
#include <gmock/gmock.h>

class MockUser: public User {
public:
    MOCK_METHOD(int, getAge, (), (override));
};

#endif //MOCKUSER_H