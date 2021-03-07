/***********************************************************************
CSCI 297        Program 3     Fall 2018

Programmer: Cortland Ervins

Section: HP2

Date Due: 12/7/2018

Purpose: TicTacToe
***********************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;



class TicTacToe
{
	public:
		TicTacToe();
		
		void printboard();
		
		void fillSquare( const char filename[] );
		
		char playeroneturn();
		
		char playertwoturn();
		
		bool checkwin() ;
	
		private:
			int buildArray(int[]);
					
			char square2 [3] [3];
			
			int input;
			
		    int cont;
			
			int play;
			} ;


int main()
{

	TicTacToe game;
	

	int cont = 1;
	
	game.printboard();
	
	
	while (cont = 1)
	{
	
    game.playeroneturn();
   
    
	game.printboard();
	
    if(game.checkwin() == 1)
    {
    	return 0;
	}
   
	game.playertwoturn();
	
	
	game.printboard();
	
	
	if(game.checkwin() == 1)
    {
    	return 0;
	}
	
     }
     
	
}


TicTacToe::TicTacToe()
{
	int r, c; // Used for the for loops

	

for (r = 0; r < 3; r++)
	{
	
		for( c = 0; c< 3; c++)
		{
		//	cout << "square[" << i <<"][" << j <<"]:";
			square2[r][c] =  ' ' ; // Puts 0s into each part of the 2d array.
		}
	
	}
}


void TicTacToe::printboard()
{
	cout << square2[0][0] << " | " << square2[0][1] << " | " << square2[0][2] << setw(40) << "1" << " | " << "2" << " | " << "3" << endl;                              
	cout<< "----------" << setw(48) << "----------" << endl;
	cout << square2[1][0] << " | " << square2[1][1] << " | " << square2[1][2] << setw(40) << "4" << " | " << "5" << " | " << "6" << endl;
	cout<< "----------" << setw(48) << "----------" << endl;
	cout << square2[2][0] << " | " << square2[2][1] << " | " << square2[2][2] << setw(40) << "7" << " | " << "8" << " | " << "9" << endl;
}
/****************
Method: checkwin()

Use: Checks to see if either play has put 3 in a row. If they have it returns true, if not it returns false.

Arguments: None

Returns: true or false

****************/

char TicTacToe::playeroneturn()
{
	
	cout << endl << endl;

	cout << "Player 1. Enter where you want to place an X (Use table on right as reference):" ;
	cin>> input ;
	cout << endl << endl;
	
	if( input == 1)
	{
		if(square2[0][0] == 'X' || square2[0][0] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
			
		}
	    else 
		{
		square2[0][0] ='X' ;
		}
	}
	
	else if( input == 2)
	{
		if(square2[0][1] == 'X' || square2[0][1] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		
		else
		{
		square2[0][1] ='X' ;
	}
	
	}
	
	else if( input == 3)
	{
		if(square2[0][2] == 'X' || square2[0][2] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else{
		
		square2[0][2] ='X' ;
	}
	}
	
	else if( input == 4)
	{
		if(square2[1][0] == 'X' || square2[1][0] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		
		else {
		
		square2[1][0] ='X' ;
	}
	}
	
	else if( input == 5)
	{
		if(square2[1][1] == 'X' || square2[1][1] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else 
		{
		
		square2[1][1] ='X' ;
	}
	}
	
	else if( input == 6)
	{ 
		if(square2[1][2] == 'X' || square2[1][2] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else
		{
		
		square2[1][2] ='X' ;
			}
	}
	
	else if( input == 7)
	{
		if(square2[2][0] == 'X' || square2[2][0] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else {
		
		square2[2][0] ='X' ;
	}
	}
	
	else if( input == 8)
	{
		if(square2[2][1] == 'X' || square2[2][1] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else {
		
		square2[2][1] ='X' ;
	}
	}
	
	else if( input == 9)
	{
		if(square2[2][2] == 'X' || square2[2][2] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else {
		
		square2[2][2] ='X' ;
	}
	}
	
}
/****************
Method: playeroneturn()

Use:Let's player one take their turn.

Arguments: None

Returns: None

****************/
char TicTacToe::playertwoturn()
{
	cout << endl << endl;

	cout << "Player 2. Enter where you want to place an O (Use table on right as reference):" ;
	cin>> input ;
	cout << endl << endl;
	
	if( input == 1)
	{
		if(square2[0][0] == 'X' || square2[0][0] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else{
		
		square2[0][0] ='O' ;
	}
	}
	
	else if( input == 2)
	{
		if(square2[0][1] == 'X' || square2[0][1] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else 
		{
				square2[0][1] ='O' ;
			}
	}
	
	else if( input == 3)
	{
		if(square2[0][2] == 'X' || square2[0][2] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else {
		
		square2[0][2] ='O' ;
	}
	}
	
	else if( input == 4)
	{
		if(square2[1][0] == 'X' || square2[1][0] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else {
		
		square2[1][0] ='O' ;
	}
	}
	
	else if( input == 5)
	{
		if(square2[1][1] == 'X' || square2[1][1] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else {
		
		square2[1][1] ='O' ;
	}
	}
	
	else if( input == 6)
	{ 
		if(square2[1][2] == 'X' || square2[1][2] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else {
		
		square2[1][2] ='O' ;
	}
	}
	
	else if( input == 7)
	{
		if(square2[2][0] == 'X' || square2[2][0] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else {
		
		square2[2][0] ='O' ;
	}
	}
	
	else if( input == 8)
	{
		if(square2[2][1] == 'X' || square2[2][1] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else{
		
		square2[2][1] ='O' ;
	}
	}
	
	else if( input == 9)
	{
		if(square2[2][2] == 'X' || square2[2][2] == 'O')
		{
			cout << "This square is already filled. You lose your turn." << endl << endl;
		}
		else{
		
		square2[2][2] ='O' ;
	}
	}
		
}

/****************
Method: playertwoturn()

Use: Lets player two take their turn, 

Arguments: None

Returns: None

****************/

bool TicTacToe::checkwin()
{
	if ( square2[0][0] == 'X' && square2[0][1] == 'X' && square2[0][2] == 'X')
	{
		cout << "Congratulations Player 1. You Won"<< endl << endl ;
	   return true;
	}
	
		else if (square2[1][0] == 'X' && square2[1][1] == 'X' && square2[1][2] == 'X')
	{
		cout << "Congratulations Player 1. You Won"<< endl << endl ;
		return true;
	}
	
			else if (square2[2][0] == 'X' && square2[2][1] == 'X' && square2[2][2] == 'X')
	{
		cout << "Congratulations Player 1. You Won"<< endl << endl ;
		return true;
	}
	
				else if (square2[0][0] == 'X' && square2[1][1] == 'X' && square2[2][2] == 'X')
	{
		cout << "Congratulations Player 1. You Won"<< endl << endl ;
		return true;
	}
	
					else if (square2[2][0] == 'X' && square2[1][1] == 'X' && square2[0][2] == 'X')
	{
		cout << "Congratulations Player 1. You Won"<< endl << endl ;
		return true;
	}
	
						else if (square2[0][0] == 'X' && square2[1][0] == 'X' && square2[2][0] == 'X')
	{
		cout << "Congratulations Player 1. You Won"<< endl << endl ;
		return true;
	}	
							
							else if (square2[0][1] == 'X' && square2[1][1] == 'X' && square2[2][1] == 'X')
	{
		cout << "Congratulations Player 1. You Won"<< endl << endl ;
		return true;
	}
	
								else if (square2[0][2] == 'X' && square2[1][2] == 'X' && square2[2][2] == 'X')
	{
		cout << "Congratulations Player 1. You Won"<< endl << endl ;
		return true;
	}
	
	
	
	
	
	
	
	
	
	
    	else if (square2[0][0] == 'O' && square2[0][1] == 'O' && square2[0][2] == 'O')
	{
		cout << "Congratulations Player 2. You Won"<< endl << endl ;
		return true;
	}
	
			else if (square2[1][0] == 'O' && square2[1][1] == 'O' && square2[1][2] == 'O')
	{
		cout << "Congratulations Player 2. You Won"<< endl << endl ;
		return true;
	}
	
				else if (square2[2][0] == 'O' && square2[2][1] == 'O' && square2[2][2] == 'O')
	{
		cout << "Congratulations Player 2. You Won"<< endl << endl ;
		return true;
	}
	
					else if (square2[0][0] == 'O' && square2[1][1] == 'O' && square2[2][2] == 'O')
	{
		cout << "Congratulations Player 2. You Won"<< endl << endl ;
		return true;
	}
	
						else if (square2[2][0] == 'O' && square2[1][1] == 'O' && square2[0][2] == 'O')
	{
		cout << "Congratulations Player 2. You Won"<< endl << endl ;
		return true;
	}
	
							else if (square2[0][0] == 'O' && square2[1][0] == 'O' && square2[2][0] == 'O')
	{
		cout << "Congratulations Player 2. You Won"<< endl << endl ;
		return true;
	}
	
								else if (square2[0][1] == 'O' && square2[1][1] == 'O' && square2[1][2] == 'O')
	{
		cout << "Congratulations Player 2. You Won"<< endl << endl ;
		return true;
	}
	
									else if (square2[0][2] == 'O' && square2[1][2] == 'O' && square2[2][2] == 'O')
	{
		cout << "Congratulations Player 2. You Won"<< endl << endl ;
		return true;
	}
	
return false;
}

/****************
Method: checkwin()

Use: Checks to see if either play has put 3 in a row. If they have it returns true, if not it returns false.

Arguments: None

Returns: true or false

****************/

