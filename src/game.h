#ifndef _GAME_
#define _GAME_

#include <vector>
#include <memory>
#include "student.h"

class Game {
public:
    Game(unsigned n = 100,
        unsigned special_num1 = 3,
        unsigned special_num2 = 5,
        unsigned special_num3 = 7
    );
    ~Game();

    void addStudent(unsigned pos);
    std::vector<std::shared_ptr<Student>> getStudents();

private:
    std::vector<std::shared_ptr<Student>> students;
};

#endif
