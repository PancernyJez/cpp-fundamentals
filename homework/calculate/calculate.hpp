#pragma once
#include <string>
#include <iostream>

std::string calculate(const std::string& command, int first, int second) {

    if (command == "add"){
        int wynik = first + second;
        return std::to_string (wynik);
    } else if (command == "substract"){
        int wynik = first - second;
        return std::to_string (wynik);
    } else if (command == "multiply"){
        int wynik = first * second;
        return std::to_string (wynik);
    } else if (command == "divide" && second != 0){
        float wynik = (float ) first / second;
        return std::to_string (wynik);
    } else return "Invalid data";
    return "";
}
