#include <iostream>

char inputPosition;
enum position { Goal = 'g', Mid = 'm', Strike = 's', Wing = 'w', Defend = 'd' }; //Declaring the enum outside of the struct, otherwise it will not work

struct Soccer { //Struct for all of the player variables
	int playerNum;
	float playerSpeed;
	position playerPosit; //This is the variable for the enum
};
position playerPosition = (position)inputPosition;

void inputPlayerData(Soccer& player) { //This function is for inputing the player stats
	std::cout << "\nEnter the players number: ";
	std::cin >> player.Soccer::playerNum;
	std::cout << "Enter the players top speed: ";
	std::cin >> player.Soccer::playerSpeed;
	std::cout << "What is the players position:\n\ng. Goalkeeper\nm. Midfielder\ns. Striker\nw. Winger\nd. Defender";
	std::cin >> inputPosition;
	switch (inputPosition) { //this switch case is for setting the players position in the enum
	case position::Goal:
		player.Soccer::playerPosit = Goal;
		break;

	case position::Mid:
		player.Soccer::playerPosit = Mid;
		break;

	case position::Strike:
		player.Soccer::playerPosit = Strike;
		break;

	case position::Wing:
		player.Soccer::playerPosit = Wing;
		break;

	case position::Defend:
		player.Soccer::playerPosit = Defend;
		break;
	};
	system("cls");

};

void printPlayerStats(Soccer& player) { //This function presents the stats to the user asfter they've finished writing the stats
	std::cout << "\nPlayer Number: " << player.Soccer::playerNum << std::endl;
	std::cout << "Speed: " << player.Soccer::playerSpeed << " MPH" << std::endl;
	std::cout << "Position: ";
	switch (player.Soccer::playerPosit) { //Again this switch case presents the position from the enum
	case position::Goal:
		std::cout << "Goalkeeper";
		break;

	case position::Mid:
		std::cout << "Midfielder";
		player.Soccer::playerPosit = Mid;
		break;

	case position::Strike:
		std::cout << "Striker";
		player.Soccer::playerPosit = Strike;
		break;

	case position::Wing:
		std::cout << "Winger";
		player.Soccer::playerPosit = Wing;
		break;

	case position::Defend:
		std::cout << "Defender";
		player.Soccer::playerPosit = Defend;
		break;
	};
	std::cout << "\n\n";
}

int main() {

	Soccer player1; //Creating the player 1 class in the struct
	Soccer player2; //Creating the player 2 class in the struct

	std::cout << "Enter player 1 data: ";
	inputPlayerData(player1); //Passing player1 as a parameter to the function allows the user to write stats to the struct under the player1 name

	std::cout << "Enter player 2 data: ";
	inputPlayerData(player2); //Same here as for player 1

	std::cout << "Player 1 data: ";
	printPlayerStats(player1); //Passing player1 to the function here allows the player's stats to be presented

	std::cout << "Player 2 data: ";
	printPlayerStats(player2); //Same for player2
}
© 2022 GitHub, Inc.
Terms
