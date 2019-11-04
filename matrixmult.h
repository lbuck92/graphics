#ifndef MATRIXMULT_H
#define MATRIXMULT_H

#include <vector>
#include <stdexcept>
using namespace std;

class MultiplyMatrix{

  public:
    vector<vector<float> > MultMatrix(int rowsM1, int colsM1, int rowsM2, int colsM2,
      vector<vector<float> > matrix1, vector<vector<float> > matrix2);

};

vector<vector<float> > MultiplyMatrix::MultMatrix(int rowsM1, int colsM1, int rowsM2, int colsM2,
  vector<vector<float> > m1, vector<vector<float> > m2){

    vector<vector<float> > m3(rowsM1, vector<float>(colsM2));

    if(colsM1 != rowsM2){
      throw std::invalid_argument("Vector dimensions incompatible. It is impossible to multiply these vectors");
    } else {
      int rowVal, colVal = 0;
      for(int i = 0; i < rowsM1; i++){
        for(int j = 0; j < colsM2; j++){
          while(rowVal < rowsM1 && colVal < colsM2){
            m3[i][j] += (m1[i][colVal] * m2[rowVal][j]);
            rowVal++;
            colVal++;
          }
          rowVal = colVal = 0;
        }
      }
   }
    return m3;
  }

#endif
