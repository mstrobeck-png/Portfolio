#include <iostream>
#include <cstring>
#include "hangman.h"
using namespace std;

int main() //taking a letter and searching a word for it
{
	int wrongGuesses = 0;
	char answer[6] = "apple";
	char gameAnswer[11] = {}; //to fill as the game goes on
	char ans1[29]; //user input
	cout << "Let's Play Sassy Hangman! " << endl;
	showDisplay(ans1, gameAnswer, wrongGuesses);
	cout << "The word has " << strlen(answer) << " characters in it." << endl;

	cout << "What's your guess?" << endl;

	cin.getline(ans1, 29);
	guessChecker(ans1, gameAnswer, wrongGuesses);

}


void showDisplay(char ans1[29], char gameAnswer[11], int wrongGuesses)
{
	if (wrongGuesses == 0)
	{
		cout << "__________" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
	}

	if (wrongGuesses == 1)
	{
		cout << " __________ " << endl;
		cout << " |   O " << endl;
		cout << " |    " << endl;
		cout << " |   " << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
		cout << " |" << endl;
	}

	if (wrongGuesses == 2)
	{
		cout << " __________ " << endl;
		cout << " |   O " << endl;
		cout << " |   | " << endl;
		cout << " |   " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
	}

	if (wrongGuesses == 3)
	{
		cout << " __________ " << endl;
		cout << " |   O " << endl;
		cout << " |  /| " << endl;
		cout << " |   " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
	}

	if (wrongGuesses == 4)
	{
		cout << " __________ " << endl;
		cout << " |   O " << endl;
		cout << " |  /|>   ";
		cout << " | " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
	}

	if (wrongGuesses == 5)
	{
		cout << " __________ " << endl;
		cout << " |   O " << endl;
		cout << " |  /|> " << endl;
		cout << " |  /   " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
	}

	if (wrongGuesses == 6)
	{
		cout << " __________ " << endl;
		cout << " |   O " << endl;
		cout << " |  /|> " << endl;
		cout << " |  /| " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
		cout << " | " << endl;
		cout << " | " << endl;

		endgameLose(ans1, gameAnswer, wrongGuesses);
	}
} //shows the display of the hangman along with keeps track of from guesses


void guessChecker(char ans1[29], char gameAnswer[11], int wrongGuesses)  //runs through each correct letter a user could give and if its right, word array updates those letter spots and outputs
{

	char wrongLetters[26] = {};

	if (strchr(ans1, 'p'))
	{
		gameAnswer[1] = 'p';
		gameAnswer[2] = 'p';

		cout << "Two 'p' are found in position 1 and 2." << endl;
		guessAgain(ans1, gameAnswer, wrongGuesses);
	}

	if (strchr(ans1, 'e'))
	{
		gameAnswer[4] = 'e';
		cout << "Letter 'e' is found in position 4." << endl;
		guessAgain(ans1, gameAnswer, wrongGuesses);
	}

	if (strchr(ans1, 'a'))
	{
		gameAnswer[0] = 'a';
		cout << "Letter 'a' is found at position 0." << endl;
		guessAgain(ans1, gameAnswer, wrongGuesses);
	}

	if (strchr(ans1, 'l'))
	{
		gameAnswer[3] = 'l';
		cout << "Letter 'l' is found in position 3" << endl;
		guessAgain(ans1, gameAnswer, wrongGuesses);
	}

	else {
		ans1 == wrongLetters;
		cout << "Wrong Guess, " << ans1 << " is not in the word." << endl;
		wrongGuesses++;
		cout << gameAnswer << endl;
		if (wrongGuesses > 5)
		{
			endgameLose(ans1, gameAnswer, wrongGuesses);
		}
		if (wrongGuesses < 6)
		{
			guessAgain(ans1, gameAnswer, wrongGuesses);
		}
	}
}


void guessAgain(char ans1[29], char gameAnswer[11], int wrongGuesses)  //keeps checking for user input and their guess
{

	showDisplay(ans1, gameAnswer, wrongGuesses);
	cout << "Current Guess: " << gameAnswer << endl;
	cout << "You have " << wrongGuesses << " wrong guesses." << endl;
	cout << "What's your next guess?" << endl;
	cin.getline(ans1, 29);
	cout << " " << endl;
	cout << "------------------------------- " << endl;
	guessChecker(ans1, gameAnswer, wrongGuesses);

}

void endgameWin(char ans1[29], char gameAnswer[11], int wrongGuesses)
{
	cout << "You win! The word was Apple." << endl;
	cout << "You had " << wrongGuesses << "." << endl;
}

void endgameLose(char ans1[29], char gameAnswer[11], int wrongGuesses)
{
	cout << "You lose." << endl;
	cout << "You killed the sassy hangman." << endl;
}
