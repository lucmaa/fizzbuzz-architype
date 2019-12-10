#include <assert.h>
#include "student.h"


unsigned Student::specialNumbers[3] = {0};

std::string Student::countoff()
{
    return std::to_string(pos);
}

unsigned Student::getPosition()
{
    return pos;
}

unsigned Student::getSpecialNumberByIndex(unsigned index)
{
    assert(index < 3);
    return specialNumbers[index];
}
