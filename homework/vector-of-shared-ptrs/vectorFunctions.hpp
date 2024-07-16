#ifndef vectorFunctions
#define vectorFunctions
#pragma once
#include "vectorFunctions.cpp"
std::vector<std::shared_ptr<int>> generate(int vec);
void print(const std::vector<std::shared_ptr<int>>&  vec);
void add10( std::vector<std::shared_ptr<int>>&  vec);
void sub10( std::vector<std::shared_ptr<int>>&  vec);
void sub10( std::shared_ptr<int>& ptr);
#endif
