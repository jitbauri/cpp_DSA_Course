#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
void binomial(int n,int r){
    int binomi=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"binomial coefficient value :"<<binomi;
    
}
int main(){
    int n,r;
    cout<<"enter the value of 'n':";
    cin>>n;
    cout<<"enter the value of 'r':";
    cin>>r;
    binomial(n,r);
    return 0;
}