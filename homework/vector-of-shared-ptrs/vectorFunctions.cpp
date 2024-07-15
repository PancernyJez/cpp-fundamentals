#include "vectorFunctions.hpp"
#include <iostream>
std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    for (int i = 0; i < count; ++i) {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

   void print(std::vector<std::shared_ptr<int>> vec){
       for (auto& x: vec) {
           std::cout<<*x<<'\n';
       }
   }

  void add10(std::vector<std::shared_ptr<int>> vec){
      for (auto& x: vec) {
          *x+=10;
      }
  }

  void sub10(std::shared_ptr<int> vec){
        *vec-=10;
  }

  void sub10(std::vector<std::shared_ptr<int>> vec){
      for (auto& x: vec) {
          sub10(x);
      }
  }




