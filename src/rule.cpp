#include "rule.h"

std::string Rule::message()
{
    return _msg;
}

bool TimesRule::matched(unsigned position)
{
    return (0 == position % _code);
}

bool ContainRule::matched(unsigned position)
{
    return std::to_string(position).find(std::to_string(_code)) != std::string::npos;
}
