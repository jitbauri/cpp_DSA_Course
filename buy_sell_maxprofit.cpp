#include<iostream>
using namespace std;
void maxprofit(int *prices,int n){
    int bestBuy[100000];
    bestBuy[0]=INT16_MAX;
    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
    }
    int maxprofit=0;
    for(int i=0;i<n;i++){
        int currprofit=prices[i]-bestBuy[i];
        maxprofit=max(maxprofit,currprofit);
    }
    cout<<"maxprofit ="<<maxprofit<<endl;

}
int main(){
    int prices[]={7,6,5,4,3,2,1};
    int n=sizeof(prices)/sizeof(int);
    maxprofit(prices,n);
    return 0;
}