#include "Board.h"

Board::Board()
{
	generate_board();
}

void Board::generate_board()
{
	printf(" B  |  I  |  N  |  G  |  O \n");

	int board[5][5];

	// Generate 'B' column
	generateColumn(1, 1, 15);
	// Generate 'I' column
	generateColumn(2, 15, 30);
	// Generate 'N' column
	generateMiddleColumn(3, 31, 45);
	// Generate 'G' column
	generateColumn(4, 46, 60);
	// Generate 'O' column
	generateColumn(5, 61, 75);

	for(int i = 0; i < columns.at(0).size(); i++)
	{
		cout << " ";
		if(columns.at(0).at(i) < 10)
		{
			cout << "0" << columns.at(0).at(i);
		} 
		else
		{
			cout << columns.at(0).at(i);
		}

		cout << " | " << columns.at(1).at(i) << "  | ";
		if(i == 2)
		{
		 	cout << " X";
		}
		else if(i > 2)
		{
			cout << columns.at(2).at(i - 1);
		}
		else
		{
			cout << columns.at(2).at(i);
		}

		cout << "  | " << columns.at(3).at(i) << "  | " << columns.at(4).at(i) << endl;
	}
}

/*
 * Generates a vector representation of a Bingo column
**/
void Board::generateColumn( int pos, int start_num, int end_num )
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

	columns.push_back(column);
}

/*
 * Generates a vector representation of the middle Bingo column, leaving space for the 'free space'
**/
void Board::generateMiddleColumn( int pos, int start_num, int end_num )
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

	columns.push_back(column);
}