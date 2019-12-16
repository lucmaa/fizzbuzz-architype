#include <iostream>
#include <assert.h>
#include "student.h"
#include "game.h"


unsigned Student::specialNumbers[3] = {0};

std::string Student::countoff()
{
    assert(game);
    
    std::string result = "";
    std::vector<std::shared_ptr<Rule>> & rules = game->getRules();

    if (0 == rules.size()) {
        return std::to_string(pos);
    }

    for (const auto& r : rules) {
        if (r->matched(pos)) {
            result += r->message();
        } 
    }

    return result;
}

unsigned Student::getSpecialNumberByIndex(unsigned index)
{
    assert(index < 3);
    return specialNumbers[index];
}

unsigned Student::getPosition()
{
    return pos;
}
