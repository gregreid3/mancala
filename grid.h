#ifndef GRID_H
#define GRID_H

#include <vector>
#include "cell.h"

class Grid {
	std::vector<Cell> theGrid;
  public:
	void init(int n);
	
