#include <iostream>
using namespace std;


class TTT
{
private:
	char array[3] [3];
	int playtracker;

public:
	void resetarray();
	void print();
	bool move(int row, int col);
	int iswon();

};

void TTT::resetarray()
{
	cout << "A dash '-' means the block is unused." << endl;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			array[i][j] = '-';
		}
	}
	playtracker = 1; // if this equals 1 then player 1's turn, if equals 2 then player 2s turn.

};

void TTT::print()
{
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << array[i][j] << "  ";
		}
		cout << endl;
	}

};

bool TTT::move(int row, int col)
{
	bool ans = true;

	if (row < 0){
		ans = false;
	}if (row > 2){
		ans = false;
	}if (col < 0){
		ans = false;
	}if (col > 2){
		ans = false;
	}if (array[row][col] != '-'){
		ans = false;
	}
	else {
		if (playtracker == 1){
			array[row][col] == 'X';
			playtracker == 2;
		}
		else if (playtracker == 2) {
			array[row][col] == 'O';
			playtracker == 1;
		}		
	}

	return ans;	
};


//void TTT::restart(char)
//{
//	char answer;

	//cout << "Do you want to restart the game? Y for yes, N for no. " << endl;
	//cin >> answer;

	//if (answer == N)
	//{
	//	move(int, int, int, int);
	//}
	//else{ 
		//resetarray()
	//}
//};

int TTT::iswon()
{
	int ans = 3; //1-Player 1 won, 2- Player 2 won, 3- Draw

			
	if (array[0][0] == array[0][1] && array[0][0] == array[0][2] && array[0][0] != '-'){
		if (array[0][0] == 'X'){
			ans = 1;
		}
		if (array[0][0] == '0'){
			ans = 2;
		}

	}
					
	if (array[1][0] == array[1][1] && array[1][0] == array[1][1] && array[1][0] != '-'){
		if (array[1][0] == 'X'){
			ans = 1;
		}
		if (array[1][0] == '0'){
			ans = 2;
		}
	}

	if (array[2][0] == array[2][1] && array[2][0] == array[2][2] && array[2][0] != '-'){
		if (array[2][0] == 'X'){
			ans = 1;
		}
		if (array[2][0] == '0'){
			ans = 2;
		}
	}

			
	if (array[0][0] == array[0][1] && array[0][0] == array[0][2] && array[0][0] != '-'){
		if (array[0][0] == 'X'){
			ans = 1;
		}
		if (array[0][0] == '0'){
			ans = 2;
		}
	}
			
	if (array[1][0] == array[1][1] && array[1][0] == array[1][2] && array[1][0] !=  '-'){
		if (array[1][0] == 'X'){
			ans = 1;
		}
		if (array[1][0] == '0'){
			ans = 2;
		}
	}


	if (array[2][0] == array[2][1] && array[2][0] == array[2][2] && array[2][0] != '-'){
		if (array[2][0] == 'X'){
			ans = 1;
		}
		if (array[2][0] == '0'){
			ans = 2;
		}
	}
			
	if (array[0][0] == array[1][1] && array[0][0] == array[2][2] && array[0][0] !=  '-'){
		if (array[0][0] == 'X'){
			ans = 1;
		}
		if (array[0][0] == '0'){
			ans = 2;
		}
	}
			
	if (array[0][2] == array[1][1] && array[0][2] == array[1][2] && array[0][2] != '-'){
		if (array[2][2] == 'X'){
			ans = 1;
		}
		if (array[2][2] == '0'){
			ans = 2;
		}
	}

	return ans;

};

int main()
{
	int row;
	int col;
	
	TTT tttobject;
	cout << "You're playing TicTacToe" << endl;
	cout << endl;
	tttobject.resetarray();
	tttobject.print();

	int counter = 1;
	while (counter <= 9 && tttobject.iswon() == 3){
		cout << "Player enter the row number:" << endl;
		cin >> row;
		cout << "Player enter the column number:" << endl;
		cin >> col;
		tttobject.move(row, col);
		if (tttobject.move(row, col) == true){
			tttobject.move(row, col);
			counter += 1;
			tttobject.print();
			cout << endl;
		}
		else {
			cout << "Invalid numbers" << endl;
		};
	};

	if (tttobject.iswon() == 1){
		cout << "Player 1 has won" << endl;
	}
	if (tttobject.iswon() == 2){
		cout << "Player 2 has won" << endl;
	}
	if (tttobject.iswon() == 3){
		cout << "The match is a draw" << endl;
	}
	
	
	tttobject.resetarray();
		
	return 0;
};
