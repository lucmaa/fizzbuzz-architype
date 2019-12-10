#include "game.h"

Game::Game(unsigned n)
{
    for (unsigned i = 1; i <= n; i++)
        addStudent(i);
}

Game::~Game()
{

}

void Game::addStudent(unsigned pos)
{
    students.push_back(std::make_shared<Student>(pos));
}

std::vector<std::shared_ptr<Student>> Game::getStudents()
{
    return students;
}
