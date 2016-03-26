#include <iostream>
using namespace std;


class TTT
{
public:
	char array[3] [3];

	
	char resetarray(void);
	char print(int, int, int, int);
	int move(int, int, int, int);
	void iswon(char);

};

char TTT::resetarray(void)
{
	cout << "A dash '-' means he block is unused." << endl;
	char array[3][3] = { { -, -, -}; { -, -, -} };
	cout << array << endl;
};

char TTT::print(int row1, int col1, int row2, int col2)
{
	char array[3][3] = { { -, -, -}, { -, -, -} };
	array[row1][col1] = x;
	array[row2][col2] = 0;
	cout << array << endl;
	return array;


};

int TTT::move(int, int, int, int)
{
	int row1;
	int col1;
	int row2;
	int col2;

	cout << "Player 1 enter the row number:" << endl;
	cin >> row1;
	cout << "Player 1 enter the column number:" << endl;
	cin >> col1;
	cout << "Player 2 enter the row number:" << endl;
	cin >> row2;
	cout << "Player 2 enter the column number:" << endl;
	cin >> col2;
	return row1, col1, row2, col2;

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

void TTT::iswon(char)
{
	for (int i = 0; i < 3; i++){
		for (int j = 0, j < 3; j++){
			
			if (array[i][j] = array[i][j + 1] = array[i][j + 2] = x){
				cout << "Player 1 has won." << endl;
				resetarray();
			}
			if (array[i][j] = array[i][j + 1] = array[i][j + 2] = 0){
				cout << "Player 2 has won." << endl;
				resetarray();
			}

			
			if (array[i][j] = array[i + 1][j] = array[i + 2][j] = x){
				cout << "Player 1 has won." << endl;
				resetarray();
			}
			if (array[i][j] = array[i][j + 1] = array[i][j + 2] = 0){
				cout << "Player 2 has won." << endl;
				resetarray();
			}

			
			if (array[i][j] = array[i + 1][j + 1] = array[i + 2][j + 2] = x){
				cout << "Player 1 has won." << endl;
				resetarray();
			}
			
			if (array[i][j] = array[i + 1][j + 1] = array[i + 2][j + 2] = 0){
				cout << "Player 2 has won." << endl;
				resetarray();
			}


			if (array[i][j+2] = array[i + 1][j + 1] = array[i + 2][j] = x){
				cout << "Player 1 has won." << endl; 
				resetarray();
			}
			
			if (array[i][j + 2] = array[i + 1][j + 1] = array[i + 2][j] = x){
				cout << "Player 1 has won." << endl;
				resetarray();
			}
			else {
				cout << "The game is a draw." << endl;
				resetarray();
			}


		}
	}


};

int main()
{
	TTT tttobject;
	cout << "You're playing TicTacToe" << endl;
	tttobject.resetarray();
	tttobject.move(); 
	tttobject.print();
	tttobject.move();
	tttobject.print();
	tttobject.move();
	tttobject.iswon();

	return 0;
};
