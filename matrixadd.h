#ifndef MATRIXADD_H
#define MATRIXADD_H

#include <vector>
using namespace std;


class AddMatrix{
  public:
    vector<vector<float> > addMatrix(int rows, int cols, vector<vector<float> > matrix1,
      vector<vector<float> > matrix2);
};

vector<vector<float> > AddMatrix::addMatrix(int rows, int cols, vector<vector<float> > matrix1,
  vector<vector<float> > matrix2){

  vector<vector<float> > matrix3(rows, vector<float>(rows));

  //cannot add the matrix if the number of rows
  //doesn't equal the number of cols
  if(rows != cols){
    for(int i = 0; i < rows; i++){
      for(int j = 0; j < cols; j++){
        matrix3[i][j] = 0;
      }
    }
  }else{
    for(int i = 0; i < rows; i++){
      for(int j = 0; j < cols; j++){
        matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
      }
    }
  }

  return matrix3;

}

#endif
