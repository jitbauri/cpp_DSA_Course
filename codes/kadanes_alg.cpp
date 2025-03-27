#include<iostream>
using namespace std;
//using kadanes algorithms
void maxsubarraySum(int *arr,int n){
    int maxSum=INT16_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"maxSubArraysum ="<<maxSum;
    }
    int main(){
        int arr[]={2,-3,6,-5,4,2};
        int n=sizeof(arr)/sizeof(int);
        maxsubarraySum(arr,n);
        return 0;
    }