#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "MockUser.h"

using namespace std;

int add(int a, int b) {
    return a + b;
}

TEST(test_case_1, should_3_when_given_1_and_2) {
    EXPECT_EQ(add(1, 2), 3);
}

TEST(test_case_2, should_3_when_given_1_and_2) {
    MockUser user;
    EXPECT_CALL(user, getAge).
    Times(::testing::AtLeast(3)).
    WillOnce(::testing::Return(200)).
    WillOnce(::testing::Return(300)).
    WillRepeatedly(::testing::Return(500));

    cout << user.getAge() << endl;
    cout << user.getAge() << endl;
    cout << user.getAge() << endl;
    cout << user.getAge() << endl;
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
