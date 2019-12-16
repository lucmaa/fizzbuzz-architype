#ifndef _RULE_
#define _RULE_

#include <string>

class Rule {
public:
    Rule(unsigned code, std::string msg):
        _code(code),
        _msg(msg) {};
    virtual ~Rule() {};

    std::string message();
    virtual bool matched(unsigned position) = 0;

protected:
    unsigned _code;
    std::string _msg;
};

class TimesRule : public Rule {
public:
    TimesRule(unsigned code, std::string msg):
        Rule(code, msg) {};
    ~TimesRule() {};

    bool matched(unsigned position);
};

class ContainRule : public Rule {
public:
    ContainRule(unsigned code, std::string msg):
        Rule(code, msg) {};
    ~ContainRule() {};

    bool matched(unsigned position);
};

#endif
