#include <iostream>

int Hangman() //Draw hangman at start of game
{
    std::cout << "   _____ \n";
    std::cout << "  |     | \n";
    std::cout << "  |     O \n";
    std::cout << "  |    \\|/ \n";
    std::cout << "  |     |  \n";
    std::cout << "  |    / \\ \n";
    std::cout << "  | \n";
    std::cout << "  | \n";
    std::cout << "-----";
    std::cout << "\n\n";
    return 0;
}

int HangmanRight() //This will draw the "walkman" if the player wins
{
    std::cout << "\n\n\tYour guess is correct\n";
    std::cout << " O \n";
    std::cout << "\\|/ \n";
    std::cout << " | \n";
    std::cout << "/ \\ ";
    std::cout << "\n\n";
    return 0;
}

int HangmanFailed() //This will draw the inverted man if they lose
{
    std::cout << "\n\n\tYour Guess is wrong\n";
    std::cout << "   _____ \n";
    std::cout << "  |     | \n";
    std::cout << "  |    /|\\ \n";
    std::cout << "  |     | \n";
    std::cout << "  |    /|\\ \n";
    std::cout << "  |     O \n";
    std::cout << "  | \n";
    std::cout << "  | \n";
    std::cout << "-----";
    std::cout << "\n\n";
    return 0;
}

int WrongLetter(int rounds)
{
    if (rounds < 2) 
        std::cout << "Sorry, try again\n"; //If the player loses twice it will print this message
    else
        HangmanFailed(); //However if they lose 3 times then the inverted man will be drawn to show that the player has lost
    return 0;
}

int main()
{
    Hangman(); //This will draw the hangman at the start of the game
    char letter;

    //This for loop will loop three times so the player has three guesses
    for (int i = 0; i < 3; i++) {
        std::cout << "Guess the missing letter in Yo_bee: ";
        std::cin >> letter;
        if (letter == 'o') { 
            HangmanRight(); //If the player guesses right then the "walkman" will be drawn
            i = 3; //'i' is set to 3 so the for loop will no longer be active as it only loops if 'i' is less than 3
        }
        else
            WrongLetter(i); //If the player guesses wrong them the WrongLetter function will be run
    }
}