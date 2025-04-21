#include<iostream>
#include<string>
using namespace std;
bool anagram(string str1,string str2){
    if(str1.length()!=str2.length()){
        cout<<"not a valid anagram";
        return false;
    }
    int count[26];
    for(int i=0;i<str1.length();i++){
        int idx=str1[i]-'a';
        count[idx]++;
    }
    for(int i=0;i<str2.length();i++){
        int idx=str2[i]-'a';
        if(count[idx]==0){
            cout<<"not a valid anagram";
            return false;
        }else{
            count[idx]--;
        }
    }
    cout<<"valid anagram";
    return true;
}
int main(){
    //valid anagram
    string str1;
    cout<<"enter string1 :";
    getline(cin,str1);
    string str2;
    cout<<"enter string2 :";
    getline(cin,str2);
    anagram(str1,str2);
    return 0;
}