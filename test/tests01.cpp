#include "../include/time.h"
#include <gtest/gtest.h>
TEST(test_01, basic_test_set) {
    ASSERT_TRUE(time(8,30,"am") == "0830");
}

TEST(test_02, basic_test_set) {
    ASSERT_TRUE(time(8,30,"pm") == "2030");
}

TEST(test_03, basic_test_set) {
    ASSERT_TRUE(time(1,0,"am") == "0100");
}

TEST(test_04, basic_test_set) {
    ASSERT_TRUE(time(1,0,"pm") == "1300");
}

TEST(test_05, basic_test_set) {
    ASSERT_TRUE(time(10,45,"am") == "1045");
}

TEST(test_06, basic_test_set) {
    ASSERT_TRUE(time(10,45,"pm") == "2245");
}

TEST(test_07, basic_test_set) {
    ASSERT_TRUE(time(12,0,"pm") == "0000");
}

TEST(test_08, basic_test_set) {
    ASSERT_TRUE(time(12,0,"am") == "1200");
}

TEST(test_09, basic_test_set) {
    ASSERT_TRUE(time(9,5,"am") == "0905");
}

TEST(test_10, basic_test_set) {
    ASSERT_TRUE(time(9,5,"pm") == "2105");
}

TEST(test_11, basic_test_set) {
    ASSERT_TRUE(time(12,01,"am") == "0001");
}

TEST(test_12, basic_test_set) {
    ASSERT_TRUE(time(12,01,"pm") == "1201");
}

int main(int argc, char ** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}