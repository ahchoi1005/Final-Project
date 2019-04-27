#include <iostream>
#include <string>
#include "gameboard.h"

using namespace std;

int main(){

	gameBoard game;

	game.clear();

	int count = 0;

	string p1, p2;
	cout << "Enter Player 1's name: ";
	cin >> p1;
	cout << "Enter Player 2's name: ";
	cin >> p2;

	bool player = 0;

	while(count < 361){
		int x, y;
		bool rowf, colf, diaf1, diaf2;

		if(player == 0){
			cout << p1 << " 's turn" << endl << "X: ";
			cin >> x;
			cout << "Y: ";
			cin >> y;

			if(!(game.empty(x,y))){
				cout << "Can't put it there" << endl;
				continue;
			}
			if((game.empty(x,y))){
				game.piece(x,y,'O');
				game.print();
			}

			rowf = game.rowfive(x,y);
			colf = game.colfive(x,y);
			diaf1 = game.diag1five(x,y);
			diaf2 = game.diag2five(x,y);

			if(rowf == 1 || colf == 1 || diaf1 == 1 || diaf2 == 1){
				cout << p1 << " won!!!" << endl;
				break;
			}
			
			player = 1;
		}

		if(player == 1){
			cout << p2 << " 's turn" << endl << "X: ";
			cin >> x;
			cout << "Y: ";
			cin >> y;

			if(!(game.empty(x,y))){
				cout << "Can't put it there" << endl;
				continue;
			}

			if((game.empty(x,y))){
				game.piece(x,y,'X');
				game.print();
			}

			rowf = game.rowfive(x,y);
			colf = game.colfive(x,y);
			diaf1 = game.diag1five(x,y);
			diaf2 = game.diag2five(x,y);

			if(rowf == 1 || colf == 1 || diaf1 == 1 || diaf2 == 1){
				cout << p2 << " won!!!" << endl;
				break;
			}

			player = 0;
		}
		count ++;
	}
}
