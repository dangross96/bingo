#ifndef BOARDGENERATOR_H
#define BOARDGENERATOR_H

#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <vector>
#include <time.h>

using namespace std;

class BoardGenerator{
	public:
		static void generate_board();
	private:
		static vector<int> generateColumn( int start_num, int end_num );
		static vector<int> generateMiddleColumn( int start_num, int end_num );
} ;

#endif