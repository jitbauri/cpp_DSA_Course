#include<iostream>
using namespace std;
// max subarray sum for using brute force approach
void maxsubarraySum(int *arr,int n){
    int maxSum=INT16_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currSum=0;
            for(int k=i;k<=j;k++){
                currSum+=arr[k];
            }
            cout<<currSum<<" "<<",";
            maxSum=max(maxSum,currSum);
        }
        cout<<endl;
    }
    cout<<"max subarraySum :"<<maxSum;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarraySum(arr,n);
    return 0;
}