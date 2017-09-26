#include "BoardGenerator.h"

void BoardGenerator::generate_board()
{
	printf(" B  |  I  |  N  |  G  |  O \n");

	int board[5][5];

	// Generate 'B' column
	vector<int> B = generateColumn(1, 15);
	// Generate 'I' column
	vector<int> I = generateColumn(15, 30);
	// Generate 'N' column
	vector<int> N = generateMiddleColumn(31, 45);
	// Generate 'G' column
	vector<int> G = generateColumn(46, 60);
	// Generate 'O' column
	vector<int> O = generateColumn(61, 75);

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
vector<int> BoardGenerator::generateColumn( int start_num, int end_num )
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
vector<int> BoardGenerator::generateMiddleColumn( int start_num, int end_num )
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