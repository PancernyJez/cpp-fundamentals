#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec;
    for (int i = 0; i < count; i++) {
        vec.push_back(std::make_shared<int>(i));
    }
    return vec;
}

   void print(const std::vector<std::shared_ptr<int>>& vec){
       for (const auto& x: vec) {
           std::cout<<*x<<'\t';
       }
       std::cout<<std::endl;
   }

  void add10(std::vector<std::shared_ptr<int>>& vec){
      for (const auto& x: vec) {
          *x+=10;
      }
  }

  void sub10(std::shared_ptr<int>& ptr){
        *ptr-=10;
  }

  void sub10(std::vector<std::shared_ptr<int>>& vec){
      for (std::shared_ptr<int> x: vec) {
          sub10(x);
      }
  }




