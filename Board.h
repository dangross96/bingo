#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <vector>
#include <time.h>

using namespace std;

class Board{
	public:
		Board();
		void generate_board();
	private:
		vector< vector<int> > columns;
		void generateColumn( int pos, int start_num, int end_num );
		void generateMiddleColumn( int pos, int start_num, int end_num );
} typedef board_t;

#endif