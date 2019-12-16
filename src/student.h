#ifndef _STUDENT_
#define _STUDENT_

#include <string>
#include <vector>

class Game;

class Student {
public:
    Student(unsigned i, Game *g):pos(i),game(g) {};
    ~Student() {};

    std::string countoff();
    unsigned getSpecialNumberByIndex(unsigned index);
    unsigned getPosition();

public:
    static unsigned specialNumbers[3];

private:
    unsigned pos;
    Game *game;
};

#endif
