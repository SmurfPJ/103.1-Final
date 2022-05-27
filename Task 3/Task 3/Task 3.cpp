#include <iostream>

int main()
{
    int matricesA[3][3], matricesB[3][3], matricesC[3][3]; //Declaring the 3 matrices

    std::cout << "\nPlease input 9 variables into Matrice A:\n";
    for (int i = 0; i < 3; i++) { //This double for loop get all three values for the top row of matriceA and then moves down to the next one
        for (int j = 0; j < 3; j++) {
            std::cin >> matricesA[i][j];
        }
    }
    system("cls"); //system("cls") clears the console to prevent screen clutter

    std::cout << "\nPlease input 9 variables into Matrice B:\n";
    for (int i = 0; i < 3; i++) { //This double for loop is the same as the one for matriceA (line 7 - 12) but its for matriceB
        for (int j = 0; j < 3; j++) {
            std::cin >> matricesB[i][j];
        }
    }
    system("cls"); //system("cls") clears the console to prevent screen clutter

    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) {
            matricesC[i][j] = matricesA[i][j] + matricesB[i][j]; //This addes matriceA & B together to equal matriceC...
            matricesC[i][j] *= 3; //...then it multiplies it by 3 to get the final answer
        }
    }

    for (int i = 0; i < 3; i++) { //This double for loop prints matriceC in the correct format
        std::cout << "\n";
        for (int j = 0; j < 3; j++) {
            std::cout << "\t" << matricesC[i][j];
        }
    }
}
