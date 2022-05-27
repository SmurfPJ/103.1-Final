#include <iostream>

void Sum(int* arr, int maxArray)
{
    int temp;
    int sum = 0;

    for (int i = 0; i < maxArray; i++) {
        label:
        std::cout << "\nPlease input " << maxArray << " numbers. " << maxArray - i << " / " << maxArray << " remaining:\n";
        std::cin >> temp;
        if (temp > 0) {
            arr[i] = temp;
            sum += temp;
        }
        else {
            std::cout << "Wrong input";
            goto label;
        }
    }

    for (int i = 0; i < maxArray; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n" << sum;
} 

int main()
{
    int input[100];
    int size;

    std::cout << "How many numbers do you want to input: ";
    std::cin >> size;
    Sum(input, size);
}