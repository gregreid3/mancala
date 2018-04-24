#include "cell.h"

void Cell::addPiece() { add(1); }

int Cell::play() {
	int c = count;
	count = 0;
	return c;
}

void add(int n) {
	count += n;
}

void remove(int n) {
	if (n > count) throw TooFewPieces{};
	count =- n;
} 
