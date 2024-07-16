#include "vectorFunctions.hpp"
#include <iostream>
#include <memory>
#include <vector>
std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    if (count > 0){
        for (int i = 0; i < count; i++) {
            vec.push_back(std::make_shared<int>(i));
        }
        return vec;
    }
    else return vec;
}

void print(const std::vector<std::shared_ptr<int>> &vec) {
    if (!vec.empty()){
        for (const auto &x: vec) {
            std::cout << *x << '\t';
        }
    }
}

void add10(std::vector<std::shared_ptr<int>> &vec) {
    if (!vec.empty()) {
        for (const auto &x: vec) {
            if (x != nullptr)
            *x += 10;
        }
    }
}

void sub10(int* const ptr) {
    if (ptr != nullptr)
        *ptr -= 10;
}

void sub10(std::vector<std::shared_ptr<int>> &vec) {
    if (!vec.empty()) {
        for (auto& ptr: vec) {
            sub10(ptr.get());
        }
    }
}
