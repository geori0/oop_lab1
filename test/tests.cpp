#include "time_convert.h"

#include <gtest/gtest.h>

TEST(test_am_morning_half_past, basic_test_set) {
  ASSERT_TRUE(TimeConvert(8, 30, "am") == "0830");
}

TEST(test_pm_evening_half_past, basic_test_set) {
  ASSERT_TRUE(TimeConvert(8, 30, "pm") == "2030");
}

TEST(test_am_night_begin, basic_test_set) {
  ASSERT_TRUE(TimeConvert(1, 0, "am") == "0100");
}

TEST(test_pm_day_begin, basic_test_set) {
  ASSERT_TRUE(TimeConvert(1, 0, "pm") == "1300");
}

TEST(test_am_morning_quater_past, basic_test_set) {
  ASSERT_TRUE(TimeConvert(10, 45, "am") == "1045");
}

TEST(test_pm_evening_quater_past, basic_test_set) {
  ASSERT_TRUE(TimeConvert(10, 45, "pm") == "2245");
}

TEST(test_full_moon, basic_test_set) {
  ASSERT_TRUE(TimeConvert(12, 0, "pm") == "0000");
}

TEST(test_mid_day, basic_test_set) {
  ASSERT_TRUE(TimeConvert(12, 0, "am") == "1200");
}

TEST(test_after_full_moon, basic_test_set) {
  ASSERT_TRUE(TimeConvert(12, 01, "am") == "0001");
}

TEST(test_after_midday, basic_test_set) {
  ASSERT_TRUE(TimeConvert(12, 01, "pm") == "1201");
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}