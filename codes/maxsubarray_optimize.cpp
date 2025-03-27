#include<iostream>
using namespace std;
//max subarraySum using optimize process
void maxsubarrySum(int *arr,int n){
    int maxSum=INT16_MIN;
    for(int i=0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){
            cout<<"("<<i<<" to "<<j<<")=";
            currSum+=arr[j];
            cout<<currSum<<" ";
            maxSum=max(maxSum,currSum);

        }
        cout<<endl;
    }
    cout<<"max subarraySum :"<<maxSum;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarrySum(arr,n);
    return 0;
}