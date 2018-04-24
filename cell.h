#ifndef CELL_H
#define CELL_H

class TooFewPieces {};

class Cell {
	int count;
  public:
	void addPiece();
	int play();
	void add(int n);
	void remove(int n);
};

class ScoreCell : public Cell {};

class NormCell : public Cell {};

#endif
