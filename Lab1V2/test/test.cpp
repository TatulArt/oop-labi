#include <gtest/gtest.h>
#include "../include/checkDay.h"

TEST(CheckTest, NotScared) {
    EXPECT_FALSE(checkDay("Понедельник", 18));
    EXPECT_FALSE(checkDay("Вторник", 30));
    EXPECT_FALSE(checkDay("Среда", 20));
    EXPECT_FALSE(checkDay("Четверг", -1));
    EXPECT_FALSE(checkDay("Пятница", 13));
    EXPECT_FALSE(checkDay("Суббота", 2));
    EXPECT_FALSE(checkDay("Воскресенье", -600));
}

TEST(GCDTest, Scared) {
    EXPECT_TRUE(checkDay("Понедельник", 12));
    EXPECT_TRUE(checkDay("Вторник", 96));
    EXPECT_TRUE(checkDay("Среда", 34));
    EXPECT_TRUE(checkDay("Четверг", 0));
    EXPECT_TRUE(checkDay("Пятница", 12));
    EXPECT_TRUE(checkDay("Суббота", 56));
    EXPECT_TRUE(checkDay("Воскресенье", 666));
}

TEST(GCDTest, Specials) {
    EXPECT_FALSE(checkDay("Вторник", 95));
    EXPECT_TRUE(checkDay("Пятница", -124));
    EXPECT_TRUE(checkDay("Воскресенье", -666));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
