#include<iostream>
using namespace std;
//transpose matrix 
int main(){
  int matrix[3][3]={{2,3,7},{5,6,7}};
  int n=2,m=3;
  int transpose[m][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      transpose[j][i]=matrix[i][j];
    }
  }
  //print the transpose
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
     cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}