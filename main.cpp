//
// Created by XXX on YYY.
//

#include "creature.h"
#include "maze.h"
#include <iostream>

void test() {
    Maze m("maze.txt");
    cout << m << endl;
    Creature c(4, 4);
    cout << "Path: " << c.solve(m) << endl;
    cout << m << endl;
}

int main() {
    test();
    cout << "Done!" << std::endl;
    return 0;
}