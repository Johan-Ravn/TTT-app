#ifndef USER_INPUT_H
#define USER_INPUT_H

#include <iostream>
#include <string>
#include <sstream>

bool isInteger(const std::string& input) {
    std::istringstream iss(input);
    int value;
    return (iss >> value) && (iss.eof());
}

bool isWithinRange(int value, int min, int max) {
    return (value >= min) && (value <= max);
}

#endif
