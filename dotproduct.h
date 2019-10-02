#ifndef DOTPRODUCT_H
#define DOTPRODUCT_H

#include <vector>
using namespace std;

class DotProduct {
  public:
      int product;
      void dot_product2D (vector<int> v1, vector<int> v2);
      void dot_product3D (vector<int> v1, vector<int> v2);
      void dot_productND (vector<int> v1, vector<int> v2);
};

void DotProduct::dot_product2D(vector<int> v1, vector<int> v2){
  product = ((v1[0]*v2[0]) + (v1[1]*v2[1]));
}

void DotProduct::dot_product3D(vector<int> v1, vector<int> v2){
  product = ((v1[0]*v2[0]) + (v1[1]*v2[1]) + (v1[2]*v2[2]));
}

void DotProduct::dot_productND(vector<int> v1, vector<int> v2){
  product = 0;
  for (int i = 0; i < v1.size(); i++) {
    product += (v1[i]*v2[i]);
  }
}

#endif // DOTPRODUCT_H
