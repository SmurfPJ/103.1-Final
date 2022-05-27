#include <iostream>
#include <Windows.h>

int Square()
{
    std::cout << "\n\t ___________";
    std::cout << "\n\t|           |";
    std::cout << "\n\t|           |";
    std::cout << "\n\t|           |";
    std::cout << "\n\t|           |";
    std::cout << "\n\t|___________|\n\n";
    return 0;
}

int Triangle()
{
    std::cout << "\n\t    /\\";
    std::cout << "\n\t   /  \\";
    std::cout << "\n\t  /    \\";
    std::cout << "\n\t /      \\";
    std::cout << "\n\t/________\\ \n\n";
    return 0;
}

int Rectangle()
{
    std::cout << "\n\t ___________________";
    std::cout << "\n\t|                   |";
    std::cout << "\n\t|                   |";
    std::cout << "\n\t|                   |";
    std::cout << "\n\t|                   |";
    std::cout << "\n\t|___________________|\n\n";
    return 0;
}

int CalculateScore(int numRight)
{
    int score = 10;
    score *= numRight;
    return(score);
}

int main()
{
    int numRight = 0;
    int random;
    int controls;

    do {
        std::cout << "\nWhat would you like to do?\n\n1. Play\n2. Final Score\n3. Exit\n\n";
        std::cin >> controls;
        switch (controls) {
        case 1:

            random = rand() % 3 + 1; //rand() % 3; will generate a random number between 0-2. I added (+ 1) on the end so I can more easily check weither the user has the right answer
            switch (random)
            {
            case 1:
                Square();
                break;
            case 2:
                Triangle();
                break;
            case 3:
                Rectangle();
                break;
            }
            std::cout << "What shape is this?\n\n1. Square\n2. Triangle\n3. Rectangle\n4. None of the above\n\n";
            std::cin >> controls;
            if (controls == random) {
                std::cout << "\nCorrect! You get 10 points.\n";
                numRight++;
            }
            else {
                std::cout << "Wrong answer.\n";
            }
            break;
        case 2:
            int score = CalculateScore(numRight);
            std::cout << "\nYour score is " << (score) << "\n\n";
            break;
        }
    } while (controls != 3);
}