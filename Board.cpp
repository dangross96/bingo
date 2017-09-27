#include "Board.h"

void generate_board()
{
	printf(" B  |  I  |  N  |  G  |  O \n");

	int board[5][5];

	// Generate 'B' column
	generateColumn(1, 15);
	// Generate 'I' column
	generateColumn(15, 30);
	// Generate 'N' column
	generateMiddleColumn(31, 45);
	// Generate 'G' column
	generateColumn(46, 60);
	// Generate 'O' column
	generateColumn(61, 75);

	for(int i = 0; i < B.size(); i++)
	{
		cout << " ";
		if(B.at(i) < 10)
		{
			cout << "0" << B.at(i);
		} 
		else
		{
			cout << B.at(i);
		}

		cout << " | " << I.at(i) << "  | ";
		if(i == 2)
		{
		 	cout << " X";
		}
		else if(i > 2)
		{
			cout << N.at(i - 1);
		}
		else
		{
			cout << N.at(i);
		}

		cout << "  | " << G.at(i) << "  | " << O.at(i) << endl;
	}
}

/*
 * Generates a vector representation of a Bingo column
**/
vector<int> generateColumn( int start_num, int end_num )
{
	vector<int> column;

	srand (time(NULL));

	column.push_back(rand() % (end_num - start_num + 1) + start_num);

	int next_rand = rand() % (end_num - start_num + 1) + start_num;
	while(next_rand == column[0])
	{
		next_rand = rand() % (end_num - start_num + 1) + start_num;
	}
	column.push_back(next_rand);

	next_rand = rand() % (end_num - start_num + 1) + start_num;
	while(next_rand == column[0] || next_rand == column[1])
	{
		next_rand = rand() % (end_num - start_num + 1) + start_num;
	}
	column.push_back(next_rand);

	next_rand = rand() % (end_num - start_num + 1) + start_num;
	while(next_rand == column[0] || next_rand == column[1] || next_rand == column[2])
	{
		next_rand = rand() % (end_num - start_num + 1) + start_num;
	}
	column.push_back(next_rand);

	next_rand = rand() % (end_num - start_num + 1) + start_num;
	while(next_rand == column[0] || next_rand == column[1] || next_rand == column[2] || next_rand == column[3])
	{
		next_rand = rand() % (end_num - start_num + 1) + start_num;
	}
	column.push_back(next_rand);

	return column;
}

/*
 * Generates a vector representation of the middle Bingo column, leaving space for the 'free space'
**/
vector<int> generateMiddleColumn( int start_num, int end_num )
{
	vector<int> column;

	srand (time(NULL));

	column.push_back(rand() % (end_num - start_num + 1) + start_num);

	int next_rand = rand() % (end_num - start_num + 1) + start_num;
	while(next_rand == column[0])
	{
		next_rand = rand() % (end_num - start_num + 1) + start_num;
	}
	column.push_back(next_rand);

	next_rand = rand() % (end_num - start_num + 1) + start_num;
	while(next_rand == column[0] || next_rand == column[1])
	{
		next_rand = rand() % (end_num - start_num + 1) + start_num;
	}
	column.push_back(next_rand);

	next_rand = rand() % (end_num - start_num + 1) + start_num;
	while(next_rand == column[0] || next_rand == column[1] || next_rand == column[2])
	{
		next_rand = rand() % (end_num - start_num + 1) + start_num;
	}
	column.push_back(next_rand);

	next_rand = rand() % (end_num - start_num + 1) + start_num;

	return column;
}