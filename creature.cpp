//
// Created by Yusuf Pisan on 4/18/18.
//

#include "creature.h"

ostream& operator<<(ostream& out, const Creature& creature) {
	return out;
}

Creature::Creature(int row, int col) : row(row), col(col) {
}

bool Creature::atExit(const Maze& maze) const {
	return true;
}

string Creature::solve(Maze& maze) {
	string path;
	return path;
}

string Creature::goNorth(Maze& maze) {
	return "X";
}

string Creature::goWest(Maze& maze) {
	return "X";
}

string Creature::goEast(Maze& maze) {
	return "X";
}

string Creature::goSouth(Maze& maze) {
	return "X";
}