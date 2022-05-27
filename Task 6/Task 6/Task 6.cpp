#include <iostream>
#include <string>



struct expenses //struct for variables
{
    std::string date;
    float transportCost;
    float mealCost;
    float entertainment;
    float other;

    expenses(std::string date, float tranCost, float meal, float entain, float oth)
    {
        date = date;
        transportCost = tranCost;
        mealCost = meal;
        entertainment = entain;
        other = oth;
    }
};

void DailyExpensesReport(expenses& day, float dayTotal) { //This function prints all the expenses from the day that has been passed to it
    std::cout << "\ndate: " << day.expenses::date << std::endl;
    std::cout << "Transport expenses: " << day.expenses::transportCost << std::endl;
    std::cout << "Meal expenses: " << day.expenses::mealCost << std::endl;
    std::cout << "Entertainment expenses: " << day.expenses::entertainment << std::endl;
    std::cout << "Other expenses: " << day.expenses::other << std::endl;
    dayTotal = day.transportCost + day.mealCost + day.entertainment + day.other;
    std::cout << "Total daily expenses: " << dayTotal << std::endl;
}

void WeeklyExpensesReport(expenses& day1, expenses& day2, expenses& day3) { //This function prints the total expenses from all three days added together
    std::cout << "\nDates of the week include: " << day1.date << " & " << day2.date << " & " << day3.date << std::endl;
    float weekTransportTotal = day1.transportCost + day2.transportCost + day3.transportCost;
    std::cout << "Weeks transport expenses: " << weekTransportTotal << std::endl;
    float weekMealTotal = day1.mealCost + day2.mealCost + day3.mealCost;
    std::cout << "Weeks meal expenses:  " << weekMealTotal << std::endl;
    float weekEntertainmentTotal = day1.entertainment + day2.entertainment + day3.entertainment;
    std::cout << "Weeks entertainment expenses:  " << weekEntertainmentTotal << std::endl;
    float weekOtherTotal = day1.other + day2.other + day3.other;
    std::cout << "Weeks other expenses: " << weekOtherTotal << std::endl;
    float weekTotal = weekTransportTotal + weekMealTotal + weekEntertainmentTotal + weekOtherTotal;
    std::cout << "Weeks total expenses: " << weekTotal << "\n\n";
}

void viewRecord(expenses& day1, expenses& day2, expenses& day3) { //This function just prints the datas from all the days
    std::cout << "\nViewing Record:\n";
    std::cout << "\nThe dates data has been inputted include: " << std::endl;
    std::cout << " 1. " << day1.date << std::endl;
    std::cout << " 2. " << day2.date << std::endl;
    std::cout << " 3. " << day3.date << std::endl << std::endl;
}

void input(expenses& day) { //This functions controlls he input for all three days. Depending on what day has been passed to the function
    std::cout << "\nEnter Date: ";
    std::cin >> day.expenses::date;
    std::cout << "Enter Transport cost: ";
    std::cin >> day.expenses::transportCost;
    std::cout << "Enter Meal cost: ";
    std::cin >> day.mealCost;
    std::cout << "Enter Entertainment cost: ";
    std::cin >> day.entertainment;
    std::cout << "Other cost: ";
    std::cin >> day.other;
}

int main() {

    expenses day1("First date", 1, 1, 1, 1);
    float day1Total = 0;
    expenses day2("Second Date", 2, 2, 2, 2);
    float day2Total = 0;
    expenses day3("Third Date", 3, 3, 3, 3);
    float day3Total = 0;

    int controls;
    int daysEntered = 0;
    bool looping = true;

    std::cout << "Personal Expenses Tracking System";


    while (looping == true) { //Main menu
        void mainMenu(); {
            std::cout << "\n\n\nMain Menu";
            std::cout << "\n1. Input daily expenses.";
            std::cout << "\n2. View daily expenses report.";
            std::cout << "\n3. View weekly expenses report.";
            std::cout << "\n4. View record.";
            std::cout << "\n5. Exit.\n\n";
        }


        std::cin >> controls;
        if (controls == 1) {
            daysEntered++;
        };

        switch (controls) {
        case 1: //Input daily Expenses
            std::cout << "Input daily expenses" << std::endl;
            std::cout << "\n\nEnter Data for day 1: " << std::endl;
            input(day1);
            std::cout << "\n\nEnter Data for day 2: " << std::endl;
            input(day2);
            std::cout << "\n\nEnter Data for day 3: " << std::endl;
            input(day3);
            std::cout << "\n\nReported data";
            break;
        case 2: //View Daily expenses report
            std::cout << "View daily expenses: " << std::endl;
            DailyExpensesReport(day1, day1Total);
            DailyExpensesReport(day2, day2Total);
            DailyExpensesReport(day3, day3Total);
            break;
        case 3: //View weekly expenses report
            std::cout << "View Weekly expenses: " << std::endl;
            WeeklyExpensesReport(day1, day2, day3);
            break;
        case 4: //View Record
            std::cout << "View Record: " << std::endl;
            viewRecord(day1, day2, day3);
            break;
        case 5: //Exit
            looping = false;
            break;
        default:
            std::cout << " Not a valid option, try again";
        }
    }
}