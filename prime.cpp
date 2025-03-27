#include<iostream>
using namespace std;
int prime(int n){
    if(n==1){
        cout<<n<<" is not a prime no";
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<n<<" is not a prime no ";
            return 0;
        }

    }
    cout<<n<<" is a prime no";
    return 0;
}
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    prime(n);
    return 0;
}