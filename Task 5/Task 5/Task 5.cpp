#include <iostream>
#include <Windows.h>

void Square() //Will draw Square when called
{
    std::cout << "\n\t ___________";
    std::cout << "\n\t|           |";
    std::cout << "\n\t|           |";
    std::cout << "\n\t|           |";
    std::cout << "\n\t|           |";
    std::cout << "\n\t|___________|";
}

void Triangle() //Will draw triangle when called
{
    std::cout << "\n\t    /\\";
    std::cout << "\n\t   /  \\";
    std::cout << "\n\t  /    \\";
    std::cout << "\n\t /      \\";
    std::cout << "\n\t/________\\ ";
}

void Rectangle(int tall, int wide) { //Will draw a rectangle when called
    for (int width = 1; width <= tall; width++)
    {
        if (width <= 1) {
            std::cout << "";
            for (int width = 1; width < wide; width++)
            {
                std::cout << "__";
            }
        }
        else if (width < tall)
        {
            std::cout << "\n";
            for (int i = 1; i <= wide; i++)
            {
                if (i == 1 || i == wide)
                    std::cout << "|";
                else
                    std::cout << "  ";
            }
        }
        else
        {
            std::cout << "\n";
            for (int j = 1; j <= wide; j++)
            {
                if (j == 1 || j == wide)
                    std::cout << "|";
                else
                    std::cout << "__";
            }
        }
    }
}

int CalculateScore(int numRight) //This will calculate the score whn called
{
    int score = 10;
    score *= numRight; //Since score is equal to 10, the number of questions they get right will be multiplied by 10 (for 10 points each question right).
    return(score);
}

int main()
{
    int numRight = 0;
    int random;
    int controls;
    int shapeControls;

    do {
        std::cout << "\nWhat would you like to do?\n\n1. Play\n2. Final Score\n3. Exit\n\n";
        std::cin >> controls;
        switch (controls) { //Main menu controls. Play, Score, Exit
        case 1:
            random = rand() % 3 + 1; //rand() % 3; will generate a random number between 0-2. I added (+ 1) on the end so I can more easily check weither the user has the right answer
            switch (random)
            {
            case 1: //Play
                Square(); //Will draw Square
                break;
            case 2:
                Triangle(); //Will draw Triangle
                break;
            case 3:
                Rectangle(7, 10);  //Will draw Rectangle (7 and 10 are the height and width for rectangle)
                break;
            }
            std::cout << "\n\nWhat shape is this?\n\n1. Square\n2. Triangle\n3. Rectangle\n4. None of the above\n\n";
            std::cin >> shapeControls;
            if (shapeControls == random) { //If the answer the user inputs is equal to the number "random", then the user will get the question right
                std::cout << "\nCorrect! You get 10 points.\n";
                numRight++;
            }
            else {
                std::cout << "\nWrong answer.\n";
            }
            break;
        case 2: //Score
            int score = CalculateScore(numRight);
            std::cout << "\nYour score is " << (score) << "\n\n";
            break;
        }
    } while (controls != 3); //This do while loop will repeat itself until the user decides to exit by typing 3
}