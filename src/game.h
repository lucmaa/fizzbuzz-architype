#ifndef _GAME_
#define _GAME_

#include <vector>
#include <memory>
#include "rule.h"
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
    std::shared_ptr<Student> getStudent(unsigned pos);
    std::vector<std::shared_ptr<Student>> getStudents();
    std::vector<std::shared_ptr<Rule>> & getRules();

private:
    std::vector<std::shared_ptr<Student>> students;
    std::vector<std::shared_ptr<Rule>> rules;
};

#endif
