#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
	begin:

	int rock = 1;
	int paper = 2;
	int scissors = 3;
	int comChoice, userChoice = 0;
	char again;

	srand(time(NULL));

	comChoice = rand() % 3 + 1;

	std::cout << "Please enter you choice below: \n";
	std::cout << "	Rock     | 1 \n";
	std::cout << "	Paper    | 2 \n";
	std::cout << "	Scissors | 3 \n";
	std::cout << "Your choice: ";
	std::cin >> userChoice;
	std::cout << "You chose " << userChoice << ", Computer chose " << comChoice << "\n\n";

	if(userChoice == 1 && comChoice == 3) {
		std::cout << "You Win! \n\n";
	} else if(userChoice == 2 && comChoice == 1) {
		std::cout << "You Win! \n\n";
	} else if(userChoice == 3 && comChoice == 2) {
		std::cout << "You Win! \n\n";
	} else if(userChoice == comChoice) {
		std::cout << "Draw! \n\n";
	} else {
		std::cout << "You Lose... \n\n";
	}

	std::cout << "Play Again (\"y\" or \"n\")? \n\n";
	std::cin >> again;
	if(again == 'y') {
		goto begin;
	} else if(again == 'n') {
		return 0;
	}
}