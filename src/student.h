#ifndef _STUDENT_
#define _STUDENT_

#include <string>
#include <vector>

class Student {
public:
    Student(unsigned i):pos(i) {};
    ~Student() {};

    std::string countoff();
    unsigned getPosition();
    unsigned getSpecialNumberByIndex(unsigned index);

public:
    static unsigned specialNumbers[3];

private:
    unsigned pos;
};

#endif
