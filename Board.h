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
		void generate_board();
	private:
		void generateColumn( int start_num, int end_num );
		void generateMiddleColumn( int start_num, int end_num );
		vector<int> B_col;
		vector<int> I_col;
		vector<int> N_col;
		vector<int> G_col;
		vector<int> O_col;
} typedef board_t;

#endif