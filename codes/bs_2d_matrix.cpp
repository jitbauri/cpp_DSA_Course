#include<iostream>
using namespace std;
//binary search for 2d matrix ,t.c=0(n*logm),for row wise binary search 
bool search(int matrix[][4],int n,int m,int key){
  for(int i=0;i<n;i++){
    int st=0,end=m-1;
    while(st<=end){
      int mid=(st+end)/2;
      if(matrix[i][mid]==key){
        cout<<key<<" key found at index :";
        cout<<"("<<i<<","<<mid<<")";
        return true;
      }else if(matrix[i][mid]<key){
        st=mid+1;
      }else{
        end=mid-1;
      }
    } 
  }
  cout<<"key not found";
  return false;
}
// binary search using colom wise
bool search1(int matrix[][4],int n,int m,int key){
  for(int i=0;i<m;i++){
    int st=0,end=n-1;
    while(st<=end){
      int mid=(st+end)/2;
      if(matrix[mid][i]==key){
        cout<<key<<" key found at index :";
        cout<<"("<<mid<<","<<i<<")";
        return true;
      }else if(matrix[mid][i]<key){
        st=mid+1;
      }else{
        end=mid-1;
      }
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