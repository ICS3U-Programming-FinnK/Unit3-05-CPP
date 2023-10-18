// # Created by: Finn Kitor
// Created on : October 18th, 2023
// this program asks the user for the month as a number between 1 to 12.

#include <iostream>
#include <map>
#include <string>
// the terminal will return the month in the string format
std::string
find_month(int month) {
    std::map<int, std::string> months = {
        {1, std::to_string(month) + " represents january."},
        {2, std::to_string(month) + " represents february."},
        {3, std::to_string(month) + " represents march."},
        {4, std::to_string(month) + " represents april."},
        {5, std::to_string(month) + " represents may."},
        {6, std::to_string(month) + " represents june."},
        {7, std::to_string(month) + " represents july."},
        {8, std::to_string(month) + " represents august."},
        {9, std::to_string(month) + " represents september."},
        {10, std::to_string(month) + " represents october."},
        {11, std::to_string(month) + " represents november."},
        {12, std::to_string(month) + " represents december."}};
    return months[month];
}
// the user will input the month here
int main() {
    int user_month;
    std::cout << "Enter the number that represents the month: ";
    std::cin >> user_month;
    std::cout << find_month(user_month) << std::endl;
    return 0;
}
