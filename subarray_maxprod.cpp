#include<iostream>
using namespace std;
void maxproduct(int *nums,int n){
    int maxprod=INT16_MIN;
    int currprod=1;
    for(int i=0;i<n;i++){
        currprod*=nums[i];
        maxprod=max(maxprod,currprod);
        if(currprod<=0){
            currprod=1;
        }


    }
    cout<<"maxproduct ="<<maxprod;
}
int main(){
    int nums[]={-2,0,-1};
    int n=sizeof(nums)/sizeof(int);
    maxproduct(nums,n);
    return 0;

}