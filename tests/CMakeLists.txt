include_directories(${CMAKE_CURRENT_LIST_DIR})
include_directories("../src")

gtest(countoff
    countoff.cpp
    ../src/game.cpp
    ../src/rule.cpp
    ../src/student.cpp)
