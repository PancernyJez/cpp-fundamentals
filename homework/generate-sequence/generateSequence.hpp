#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> v;
  if (count <= 0) {return v;}
  for (int i = 0; i < count; ++i) {
    v.push_back(step);
    step = step + step/(i+1);
  }
  return v;
}
