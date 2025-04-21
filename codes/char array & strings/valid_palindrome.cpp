#include<iostream>
#include<string.h>
using namespace std;
bool ispalindrome(char word[],int n){
    int st=0,end=n-1;
    while(st,end){
        if(word[st++]!=word[end--]){
            cout<<"not a valid palindrome ";
            return false;
        }
    }
    cout<<"valid palindrome";
    return true;
}
int main(){
    char word[50];
    cout<<"enter the word :";
    cin.getline(word,50);
    int n=strlen(word);
    ispalindrome(word,n);
    return 0;
}