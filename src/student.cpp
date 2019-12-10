#include <assert.h>
#include "student.h"


unsigned Student::specialNumbers[3] = {0};

std::string Student::countoff()
{
    if (0 == pos % specialNumbers[0]) {
        return "Fizz";
    }
    else if (0 == pos % specialNumbers[1]) {
        return "Buzz";
    }
    else if (0 == pos % specialNumbers[2]) {
        return "Whizz";
    }

    return std::to_string(pos);
}

unsigned Student::getSpecialNumberByIndex(unsigned index)
{
    assert(index < 3);
    return specialNumbers[index];
}
