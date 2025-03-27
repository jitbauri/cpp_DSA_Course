//function overloading 
#include<iostream>
using namespace std;
bool isprime(int n){
    if(n==1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void range(int num){
    for(int i=2;i<=num;i++){
        if(isprime(i)==1){
            cout<<i<<"\n";
        }
    }
}
int main(){
    int n;
    cout<<"enter the range(from 2 to n):";
    cin>>n;
    range(n);
    return 0;
}