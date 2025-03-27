#include<iostream>
using namespace std;
// staircase search ,main part(top_right,botttom_left)
//topright using
bool search(int matrix[][4],int n,int m,int key){
  int i=0,j=m-1;
  while(i<n && j>=0){
    if(matrix[i][j]==key){
      cout<<"found at("<<i<<","<<j<<")";
      return true;
    }else if(matrix[i][j]<key){
      i++;
    }else{
      j--;
    }
  }
  cout<<"key not found"<<endl;
  return false;
}
// bottomleft using
bool search1(int matrix[][4],int n,int m,int key){
  int i=n-1,j=0;
  while(i>=0 && j<m){
    if(matrix[i][j]==key){
      cout<<"key found at ("<<i<<","<<j<<")";
      return true;
    }else if(matrix[i][j]>key){
      i--;
    }else{
      j++;
    }
  }
  cout<<"key not found";
  return false;
}
int main(){
  int key;
  cout<<"enter the key :";
  cin>>key;
  int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  search(matrix,4,4,key);
  search1(matrix,4,4,key);

  return 0;
}