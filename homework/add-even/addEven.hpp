#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum = 0;
  for (int x :numbers) {
    if (x%2 == 0){
      sum+=x;
    }
  }
  return sum;
}
