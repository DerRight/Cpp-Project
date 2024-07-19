#include <iostream>
using namespace std;

enum Choice { ROCK, PAPER, SCISSORS };

int getPlayerChoice() {
	int choice;
	cout << "�п�J�z�n�X�ŤM(0)�B���Y(1)�B��(2):";
	cin >> choice;
	return choice;
}

int getComputerChoice() {
	srand(time(0));
	return rand() % 3;
}

void determineWinner(int playerChoice, int computerChoice) {
	if (playerChoice == computerChoice) {
		cout << "����" << endl;
	}
	else if ((playerChoice == ROCK && computerChoice == SCISSORS) ||
		(playerChoice == PAPER && computerChoice == ROCK) ||
		(playerChoice == SCISSORS && computerChoice == PAPER)) {
		cout << "�AĹ�F�I" << endl;
	}
	else {
		cout << "�A��F�I" << endl;
	}
}

int main() {
	int playerChoice = getPlayerChoice();
	int computerChoice = getComputerChoice();

	cout << "�q���X���O" << (computerChoice == ROCK ? "ROCK" : computerChoice == PAPER ? "PAPER" : "SISSORS") << endl;
	determineWinner(playerChoice, computerChoice);
	return 0;
}