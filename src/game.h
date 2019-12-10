#ifndef _GAME_
#define _GAME_

#include <vector>
#include <memory>
#include "student.h"

class Game {
public:
    Game(unsigned n);
    ~Game();

    void addStudent(unsigned pos);
    std::vector<std::shared_ptr<Student>> getStudents();

private:
    std::vector<std::shared_ptr<Student>> students;
};

#endif
