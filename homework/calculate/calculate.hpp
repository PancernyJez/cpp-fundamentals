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
    } else if (command == "divide"){
        float wynik =  (float) first / second;
        return std::to_string (wynik);
    } else return "Invalid data";
}
