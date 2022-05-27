#include <iostream>

void Sum(int* arr, int maxArray)
{
    int temp;
    int sum = 0;

    for (int i = 0; i < maxArray; i++) {
        label: //goto loop output
        std::cout << "\nPlease input " << maxArray << " numbers. " << maxArray - i << " / " << maxArray << " remaining:\n";
        std::cin >> temp;
        if (temp > 0) { //The if statement detects if the users input is above 0...
            arr[i] = temp;
            sum += temp; //... then add it to sum.
        }
        else { //If the input is not above 0 the the else statement will cycle back to the "label:" above
            std::cout << "Wrong input";
            goto label;
        }
    }

    std::cout << "\nThe sum of all numbers is " << sum; //Presents the sum to the user
} 

int main()
{
    int input[100]; //Creating an array with a massive size so the user can decide how many numbers they want to input
    int size;

    std::cout << "How many numbers do you want to input: ";
    std::cin >> size; //User decides how big the array of numbers they use is
    Sum(input, size);
}