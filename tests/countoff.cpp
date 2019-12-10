#include <gtest/gtest.h>
#include "student.h"
#include "game.h"

using namespace std;

TEST(StudentTest, should_countoff_same_as_position_when_rule_is_empty) {
    Game game(100);
    for (const auto& s : game.getStudents()) {
        EXPECT_TRUE(s->countoff() == to_string(s->getPosition()));
    }
}

TEST(StudentTest, should_special_numbers_are_3_5_7_when_default) {
    Game game;
    for (const auto& s : game.getStudents()) {
        EXPECT_EQ(s->getSpecialNumberByIndex(0), 3);
        EXPECT_EQ(s->getSpecialNumberByIndex(1), 5);
        EXPECT_EQ(s->getSpecialNumberByIndex(2), 7);
    }
}
