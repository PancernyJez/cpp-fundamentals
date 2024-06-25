#pragma once
#include <string>
std::string calculate(const std::string& command, int first, int second) {
    if (command == "add") {
        int wynik = first + second;
    	return std::to_string(wynik);
    } else if (command == "subtract") {
    	int wynik = first - second;
    	return std::to_string(wynik);
    } else if (command == "multiply") {
    	int wynik = first * second;
    	return std::to_string(wynik);
    } else if (command == "divide") {
        if (second == 0) {
    	    return "Division by 0";
        }
        int wynik = first / second;
        return std::to_string(wynik);
    } else
        return "Invalid data";
    return "";
}
