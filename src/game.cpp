#include <assert.h>
#include "game.h"

Game::Game(unsigned n, unsigned special_num1, unsigned special_num2, unsigned special_num3)
{
    for (unsigned i = 1; i <= n; i++)
        addStudent(i);

    Student::specialNumbers[0] = special_num1;
    Student::specialNumbers[1] = special_num2;
    Student::specialNumbers[2] = special_num3;
}

Game::~Game()
{

}

void Game::addStudent(unsigned pos)
{
    students.push_back(std::make_shared<Student>(pos));
}

std::shared_ptr<Student> Game::getStudent(unsigned pos)
{
    assert(0 < pos);

    int index = pos - 1;
    return students[index];
}

std::vector<std::shared_ptr<Student>> Game::getStudents()
{
    return students;
}

