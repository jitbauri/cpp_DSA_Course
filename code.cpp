#include<iostream>
using namespace std;
int main(){
	int decNum;
	cout<<"enter the decimal no :";
	cin>>decNum;
	int n=decNum;
	int binNum=0;
	int pow=1;
	//
	while(n>0){
		int rem=n%2;
		binNum+=rem*pow;
		pow*=10;
		n/=2;
	}
	cout<<"binary no :"<<binNum;
	return 0;
}