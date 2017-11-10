/*
Jajuan Monroe
Tic Tac Toe Project
October 2017
*/

#include <iostream>
using namespace std;

//Numbers on the tic tac toe board
char box[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkStatus();
void game();

int main()
{
	int player = 1,i,choice;

	char mark;
	do
	{
		game();
		
		//Switches between 1 and 2
		player=(player%2)?1:2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		//When it's player 1's turn, mark their choice with an X. Otherwise use O
		mark=(player == 1) ? 'X' : 'O';

		//Everytime the player chooses a number, mark the appropriate box
		//Compiler is better at optimizing switch statement as opposed to if statement.
		switch (choice){
		case 1:
			box[1] = mark;
			break;
		case 2:
			box[2] = mark;
			break;
		case 3:
			box[3] = mark;
			break;
		case 4:
			box[4] = mark;
			break;
		case 5:
			box[5] = mark;
			break;
		case 6:
			box[6] = mark;
			break;
		case 7:
			box[7] = mark;
			break;
		case 8:
			box[8] = mark;
			break;
		case 9:
			box[9] = mark;
			break;
		default:
			cout<<"Invalid move"<<endl;
			player--;
			cin.ignore();
			cin.get();
		}
		i=checkStatus();

		player++;
	}while(i==-1);
	game();
	if(i==1)

		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";

	cin.ignore();
	cin.get();
	return 0;
}

// Function to return the status of the game. 1 means game is over and there's a winner, 0 means the game is still in progress, and -1 means the game is over but it's a draw.

int checkStatus()
{
	//Switch statement takes single variable so using that wouldn't work.

	if (box[1] == box[2] && box[2] == box[3])

		return 1;
	else if (box[4] == box[5] && box[5] == box[6])

		return 1;
	else if (box[7] == box[8] && box[8] == box[9])

		return 1;
	else if (box[1] == box[4] && box[4] == box[7])

		return 1;
	else if (box[2] == box[5] && box[5] == box[8])

		return 1;
	else if (box[3] == box[6] && box[6] == box[9])

		return 1;
	else if (box[1] == box[5] && box[5] == box[9])

		return 1;
	else if (box[3] == box[5] && box[5] == box[7])

		return 1;
	else if (box[1] != '1' && box[2] != '2' && box[3] != '3' 
                    && box[4] != '4' && box[5] != '5' && box[6] != '6' 
                  && box[7] != '7' && box[8] != '8' && box[9] != '9')

		return 0;
	else
		return -1;
		
}


// Function to draw the board for the game


void game()
{
	//Clear the screen
	system("cls");

	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << box[1] << "  |  " << box[2] << "  |  " << box[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl;

	cout << "     |     |     " << endl << endl;
}