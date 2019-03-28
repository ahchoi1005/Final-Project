#include <iostream>

using namespace std;

class Board{
	public:
		Board();
		void clear();
		bool empty(int, int);
		bool rowfive(int, int);
		bool colfive(int, int);
		bool diag1five(int, int);
		bool diag2five(int, int);

	private:
		char board[19][19];
		char player1;
		char player2;
};
