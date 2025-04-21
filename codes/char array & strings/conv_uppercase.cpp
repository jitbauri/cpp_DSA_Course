#include<iostream>
#include<string.h>
using namespace std;
void uppercase(char word[],int n){
    for(int i=0;i<n;i++){
        if(word[i]>='A' && word[i]<='Z'){
            continue;
        }else if(word[i]==' '){
            continue;
        }
        else{
            word[i]=word[i]-'a'+'A';
        }
    }
    cout<<"the word is :"<<word;
}
int main(){
    char word[50];
    cin.getline(word,50);
    int n=strlen(word);
    uppercase(word,n);
    return 0;
}