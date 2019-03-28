#include <iostream>
#include "board.h"

using namespace std;

Board::Board(){
	clear();
}

void Board::clear(){
	for(int r = 0; r < 19; r++){
		for(int c = 0; c < 19; c++){
			board[r][c] = '.';
		}
	}
}

bool Board::empty(int r, int c){
	if(r >= 0 && r < 19 && c >= 0 && c< 19 && board[r][c] == '.'){
		return true;
	}
	return false;
}

bool Board::rowfive(int r, int c){
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

bool Board::colfive(int r, int c){
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

bool Board::diag1five(int r, int c){
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

bool Board::diag2five(int r, int c){
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

int main(){
	return 0;
}

