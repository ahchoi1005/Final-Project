#include <iostream>
#include "gameboard.h"

using namespace std;

gameBoard::gameBoard(){
	clear();
}

void gameBoard::clear(){
	for(int r = 0; r < 19; r++){
		for(int c = 0; c < 19; c++){
			board[r][c] = '.';
		}
	}
}

void gameBoard::print(){
	for(int r = 0; r < 19; r++){
		for(int c = 0; c < 19; c++){
			cout << board[r][c];
		}
		cout << endl;
	}
}

bool gameBoard::empty(int r, int c){
	if(r >= 0 && r < 19 && c >= 0 && c< 19 && board[r][c] == '.'){
		return true;
	}
	else if(r < 0 || r >= 19 || c < 0 || c >= 19){
		cout << "Not on the board" << endl;
		return false;
	}
	else if(board[r][c] != '.'){
		cout << "A piece is already placed here" << endl;
		return false;
	}
}

bool gameBoard::rowfive(int r, int c){
	int check = 1;
	int count = 1;

	while((c-count >= 0) && (board[r][c-count] == board[r][c])){
		check += 1;
		count += 1;
		}

	count = 1;

	while((c+count < 20) && (board[r][c+count] == board[r][c])){
		check += 1;
		count += 1;
	}

	if(check == 5){
		return true;
	}
	else{
		return false;
	}


}

bool gameBoard::colfive(int r, int c){
	int check = 1;
	int count = 1;

	while((r-count >= 0) && (board[r-count][c] == board[r][c])){
		check += 1;
		count += 1;
	}

	count = 1;

	while((r+count < 20) && (board[r+count][c] == board[r][c])){
		check += 1;
		count += 1;
	}

	if(check == 5){
		return true;
	}	
	else{
		return false;
	}

}

bool gameBoard::diag1five(int r, int c){
	int check = 1;
	int count = 1;

	while((r-count >= 0) && (c-count >= 0) && (board[r-count][c-count] == board[r][c])){
		check += 1;
		count += 1;
	}

	count = 1;

	while((r+count < 20) && (r+count < 20) && (board[r+count][c+count] == board[r][c])){
		check += 1;
		count += 1;
	}

	if(check == 5){
		return true;
	}
	else{
		return false;
	}
}

bool gameBoard::diag2five(int r, int c){
	int check = 1;
	int count = 1;

	while((r-count >= 0) && (c+count < 20) && (board[r-count][c+count] == board[r][c])){
		check += 1;
		count += 1;
	}

	count = 1;

	while((r+count < 20) && (c-count >= 0) && (board[r+count][c-count] == board[r][c])){
		check += 1;
		count += 1;
	}

	if(check == 5){
		return true;
	}
	else{
		return false;
	}
}

void gameBoard::piece(int r, int c, char p){
	board[r][c] = p;
}


