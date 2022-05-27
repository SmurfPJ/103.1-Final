#include <iostream>

char inputPosition;
enum position { Goal = 'g', Mid = 'm', Strike = 's', Wing = 'w', Defend = 'd' };

struct Soccer {
	int playerNum;
	float playerSpeed;
	position playerPosit;
};
position playerPosition = (position)inputPosition;

void inputPlayerData(Soccer& playerSpecs) {
	std::cout << "\nEnter the players number: ";
	std::cin >> playerSpecs.Soccer::playerNum;
	std::cout << "Enter the players top speed: ";
	std::cin >> playerSpecs.Soccer::playerSpeed;
	std::cout << "What is the players position:\n\ng. Goalkeeper\nm. Midfielder\nw. Winger";
	std::cin >> inputPosition;
	switch (inputPosition) {
	case position::Goal:
		playerSpecs.Soccer::playerPosit = Goal;
		break;

	case position::Mid:
		playerSpecs.Soccer::playerPosit = Mid;
		break;

	case position::Strike:
		playerSpecs.Soccer::playerPosit = Strike;
		break;

	case position::Wing:
		playerSpecs.Soccer::playerPosit = Wing;
		break;

	case position::Defend:
		playerSpecs.Soccer::playerPosit = Defend;
		break;
	};
	system("cls");

};

void printPlayerStats(Soccer& playerSpecs) {
	std::cout << "\nPlayer Number: " << playerSpecs.Soccer::playerNum << std::endl;
	std::cout << "Speed: " << playerSpecs.Soccer::playerSpeed << " MPH" << std::endl;
	std::cout << "Position: ";
	switch (playerSpecs.Soccer::playerPosit) {
	case position::Goal:
		std::cout << "Goalkeeper";
		break;

	case position::Mid:
		std::cout << "Midfielder";
		playerSpecs.Soccer::playerPosit = Mid;
		break;

	case position::Strike:
		std::cout << "Striker";
		playerSpecs.Soccer::playerPosit = Strike;
		break;

	case position::Wing:
		std::cout << "Winger";
		playerSpecs.Soccer::playerPosit = Wing;
		break;

	case position::Defend:
		std::cout << "Defender";
		playerSpecs.Soccer::playerPosit = Defend;
		break;
	};
	std::cout << "\n\n";
}

int main() {

	Soccer player1;
	Soccer player2;

	std::cout << "Enter player 1 data: ";
	inputPlayerData(player1);

	std::cout << "Enter player 2 data: ";
	inputPlayerData(player2);

	std::cout << "Player 1 data: ";
	printPlayerStats(player1);

	std::cout << "Player 2 data: ";
	printPlayerStats(player2);
}