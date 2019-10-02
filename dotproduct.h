#ifndef DOTPRODUCT_H
#define DOTPRODUCT_H

#include <vector>
using namespace std;

class DotProduct {
  public:
      int product;
      void dot_product2D (vector<int> v1, vector<int> v2);
};

void DotProduct::dot_product2D(vector<int> v1, vector<int> v2){
  product = ((v1[0]*v2[0]) + (v1[1]*v2[1]));
}

#endif // DOTPRODUCT_H
