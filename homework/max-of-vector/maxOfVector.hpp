#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int maks = vec.front();
    for (int x :vec) {
      if (x>maks){
        maks = x;
      }
    }
    return maks;
}
