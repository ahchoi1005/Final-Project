#include <iostream>

using namespace std;

class gameBoard{
	public:
		gameBoard();
		void clear();
		bool empty(int, int);
		void print();
		bool rowfive(int, int);
		bool colfive(int, int);
		bool diag1five(int, int);
		bool diag2five(int, int);
		void piece(int, int, char);

	private:
		char board[19][19];
		char player1;
		char player2;
};
