#include<iostream>
#include<string.h>
using namespace std;
void reverse(char word[],int n){
    int st=0,end=n-1;
    while(st<end){
        swap(word[st],word[end]);
        st++;
        end--;
    }
    cout<<"reverse word is :"<<word;
}
int main(){
    char word[50];
    cout<<"enter the word :";
    cin.getline(word,50);
    int n=strlen(word);
    reverse(word,n);
    return 0;
}