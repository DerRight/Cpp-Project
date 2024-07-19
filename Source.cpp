#include <iostream>
using namespace std;

enum Choice { ROCK, PAPER, SCISSORS };

int getPlayerChoice() {
	int choice;
	cout << "請輸入您要出剪刀(0)、石頭(1)、布(2):";
	cin >> choice;
	return choice;
}

int getComputerChoice() {
	srand(time(0));
	return rand() % 3;
}

void determineWinner(int playerChoice, int computerChoice) {
	if (playerChoice == computerChoice) {
		cout << "平手" << endl;
	}
	else if ((playerChoice == ROCK && computerChoice == SCISSORS) ||
		(playerChoice == PAPER && computerChoice == ROCK) ||
		(playerChoice == SCISSORS && computerChoice == PAPER)) {
		cout << "你贏了！" << endl;
	}
	else {
		cout << "你輸了！" << endl;
	}
}

int main() {
	int playerChoice = getPlayerChoice();
	int computerChoice = getComputerChoice();

	cout << "電腦出的是" << (computerChoice == ROCK ? "ROCK" : computerChoice == PAPER ? "PAPER" : "SISSORS") << endl;
	determineWinner(playerChoice, computerChoice);
	return 0;
}