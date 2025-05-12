// Copyright (c) 2025 Gustav I
// Created By: Gustav I
// Date: April 22, 2025
// This program asks the user's grade level as percentage.

#include <iostream>
#include <string>

int main() {
    std::string level;
    // Ask for grade level
    std::cout << "Enter a level (e.g. 4+, 3, 2-, R, I): ";
    std::cin >> level;
    int result = calcMark(level); //  Declare result as an integer
    if (result == -1) {  // Check if result is invalid (-1)
        std::cout << "Invalid level entered." << std::endl;
    } else {
        std::cout << "The middle percentage mark for level "
        << level << " is " << result << "%." << std::endl;
    }

    return 0;
}

int calcMark(std::string level) {
    int mark = -1;  // Default to invalid

    if (level == "4+") {
        mark = 95;  // Mark for 4+
    } else if (level == "4") {
        mark = 87;  // Mark for 4
    } else if (level == "4-") {
        mark = 82;  // Mark for 4-
    } else if (level == "3+") {
        mark = 78;  // Mark for 3+
    } else if (level == "3") {
        mark = 75;  // Mark for 3
    } else if (level == "3-") {
        mark = 71;  // Mark for 3-
    } else if (level == "2+") {
        mark = 68;  // Mark for 2+
    } else if (level == "2") {
        mark = 65;  // Mark for 2
    } else if (level == "2-") {
        mark = 61;  // Mark for 2-
    } else if (level == "1+") {
        mark = 57;  // Mark for 1+
    } else if (level == "1") {
        mark = 52;  // Mark for 1
    } else if (level == "1-") {
        mark = 51;  // Mark for 1-
    } else if (level == "R") {
        mark = 30;  // Mark for R
    } else if (level == "I") {
        mark = 0;  // Mark for I
    }

    return mark;  // return the marks
}
