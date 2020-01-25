//
// Created by XXX on YYY.
//

#include "creature.h"
#include "maze.h"
#include <iostream>

void test() {
    Maze M("maze.txt");
    // cout << m << endl;
    Creature C(4, 4);
    cout << "Path: " << C.solve(M) << endl;
    cout << M << endl;
}

int main() {
    test();
    cout << "Done!" << std::endl;
    return 0;
}