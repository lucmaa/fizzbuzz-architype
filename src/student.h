#ifndef _STUDENT_
#define _STUDENT_

#include <string>

class Student {
public:
    Student(unsigned i):pos(i) {};
    ~Student() {};

    std::string countoff();
    unsigned getPosition();

private:
    unsigned pos;
};

#endif
