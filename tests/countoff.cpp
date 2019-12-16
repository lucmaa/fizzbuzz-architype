#include <gtest/gtest.h>
#include "game.h"

using namespace std;

TEST(StudentTest, should_countoff_same_as_position_when_rule_is_empty) {
    Game game(100);
    for (const auto& s : game.getStudents()) {
        EXPECT_EQ(s->countoff(), to_string(s->getPosition()));
    }
}

TEST(StudentTest, should_special_numbers_are_3_5_7_when_default) {
    Game game(100);
    for (const auto& s : game.getStudents()) {
        EXPECT_EQ(s->getSpecialNumberByIndex(0), 3);
        EXPECT_EQ(s->getSpecialNumberByIndex(1), 5);
        EXPECT_EQ(s->getSpecialNumberByIndex(2), 7);
    }
}

TEST(StudentTest, should_countoff_fizz_when_rule_is_multiple_of_first_special_number) {
    Game game;

    auto & rules = game.getRules();
    rules.emplace_back(std::make_shared<TimesRule>(TimesRule(3, "Fizz")));

    EXPECT_EQ(game.getStudent(3)->countoff(), "Fizz");
    EXPECT_EQ(game.getStudent(9)->countoff(), "Fizz");
    EXPECT_EQ(game.getStudent(21)->countoff(), "Fizz");
}

TEST(StudentTest, should_countoff_buzz_when_rule_is_multiple_of_second_special_number) {
    Game game;

    auto & rules = game.getRules();
    rules.emplace_back(std::make_shared<TimesRule>(TimesRule(5, "Buzz")));

    EXPECT_EQ(game.getStudent(5)->countoff(), "Buzz");
    EXPECT_EQ(game.getStudent(10)->countoff(), "Buzz");
    EXPECT_EQ(game.getStudent(25)->countoff(), "Buzz");
}

TEST(StudentTest, should_countoff_whizz_when_rule_is_multiple_of_third_special_number) {
    Game game;

    auto & rules = game.getRules();
    rules.emplace_back(std::make_shared<TimesRule>(TimesRule(7, "Whizz")));

    EXPECT_EQ(game.getStudent(7)->countoff(), "Whizz");
    EXPECT_EQ(game.getStudent(28)->countoff(), "Whizz");
    EXPECT_EQ(game.getStudent(49)->countoff(), "Whizz");
}

TEST(StudentTest, should_countoff_fizzbuzz_when_rule_is_multiple_of_first_and_second_special_number) {
    Game game;

    auto & rules = game.getRules();
    rules.emplace_back(std::make_shared<TimesRule>(TimesRule(3, "Fizz")));
    rules.emplace_back(std::make_shared<TimesRule>(TimesRule(5, "Buzz")));

    EXPECT_EQ(game.getStudent(15)->countoff(), "FizzBuzz");
}

TEST(StudentTest, should_countoff_fizzbuzzwhizz_when_rule_is_contain_first_special_number) {
    Game game;

    auto & rules = game.getRules();
    rules.emplace_back(std::make_shared<ContainRule>(ContainRule(3, "FizzBuzzWhizz")));

    EXPECT_EQ(game.getStudent(23)->countoff(), "FizzBuzzWhizz");
}
