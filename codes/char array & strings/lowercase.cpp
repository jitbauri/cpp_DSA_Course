#include<iostream>
#include<string.h>
using namespace std;
void lowercase(char word[],int n){
    for(int i=0;i<n;i++){
        if(word[i]>='a' && word[i]<='a'){
            continue;
        }else if(word[i]==' '){
            continue;
        }
        else{
            word[i]=word[i]-'A'+'a';
        }
    }
    cout<<"the word is :"<<word;
}
int main(){
    char word[50];
    cin.getline(word,50);
    int n=strlen(word);
    lowercase(word,n);
    return 0;
}