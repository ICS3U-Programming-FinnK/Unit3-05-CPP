// # Created by: Finn Kitor
// Created on : October 20th, 2023
// this program asks the user for the month as a number between 1 to 12.

#include <iostream>


int main() {
    //declare the months
    int userMonth;

    //the terminal will ask the month from 1-12
    std::cout << "enter the month from 1-12: ";
    std::cin >> userMonth;
    
    // the month that is selected by a string
    switch (userMonth) {
        case 1 :
            std::cout << userMonth << "is January.\n";
            break;

        case 2 :
            std::cout << userMonth << "is February.\n";
            break;

        case 3 :
            std::cout << userMonth << "is March.\n";
            break;

        case 4 :
            std::cout << userMonth << "is April.\n";
            break;

        case 5 :
            std::cout << userMonth << "is May.\n";
            break;

        case 6 :
            std::cout << userMonth << "is June.\n";
            break;

        case 7 :
            std::cout << userMonth << "is July.\n";
            break;

        case 8 :
            std::cout << userMonth << "is August.\n";
            break;

        case 9 :
            std::cout << userMonth << "is September.\n";
            break;

        case 10 :
            std::cout << userMonth << "is October.\n";
            break;

        case 11 :
            std::cout << userMonth << "is November.\n";
            break;

        case 12 :
            std::cout << userMonth << "is December.\n";
            break;

            //responce for the errors
            default :
                std::cout << "Error." << userMonth << " Does not represent a month\n";
    }
}