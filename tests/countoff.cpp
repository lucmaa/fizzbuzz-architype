#include <gtest/gtest.h>
#include "student.h"
#include "game.h"

using namespace std;

/*
TEST(StudentTest, should_countoff_same_as_position_when_rule_is_empty) {
    Game game(100);
    for (const auto& s : game.getStudents()) {
        EXPECT_TRUE(s->countoff() == to_string(s->getPosition()));
    }
}
*/

TEST(StudentTest, should_special_numbers_are_3_5_7_when_default) {
    Game game;
    for (const auto& s : game.getStudents()) {
        EXPECT_EQ(s->getSpecialNumberByIndex(0), 3);
        EXPECT_EQ(s->getSpecialNumberByIndex(1), 5);
        EXPECT_EQ(s->getSpecialNumberByIndex(2), 7);
    }
}

TEST(StudentTest, should_countoff_fizz_when_rule_is_multiple_of_first_special_number) {
    Game game;

    EXPECT_TRUE(game.getStudent(3)->countoff() == "Fizz");
    EXPECT_TRUE(game.getStudent(9)->countoff() == "Fizz");
    EXPECT_TRUE(game.getStudent(21)->countoff() == "Fizz");
}

TEST(StudentTest, should_countoff_buzz_when_rule_is_multiple_of_second_special_number) {
    Game game;

    EXPECT_TRUE(game.getStudent(5)->countoff() == "Buzz");
    EXPECT_TRUE(game.getStudent(10)->countoff() == "Buzz");
    EXPECT_TRUE(game.getStudent(25)->countoff() == "Buzz");
}

TEST(StudentTest, should_countoff_whizz_when_rule_is_multiple_of_third_special_number) {
    Game game;

    EXPECT_TRUE(game.getStudent(7)->countoff() == "Whizz");
    EXPECT_TRUE(game.getStudent(28)->countoff() == "Whizz");
    EXPECT_TRUE(game.getStudent(49)->countoff() == "Whizz");
}
