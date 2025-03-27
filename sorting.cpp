#include<iostream>
using namespace std;
//bubble sort,selection sort,insertion sort,counting sort in decending order
void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void countingsort(int *arr,int n){
    int freq[100000];
    int minval=INT16_MAX;

    int maxval=INT16_MIN;
    for(int i=0;i<n;i++){
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);
        freq[arr[i]]++;
    }
    for(int i=maxval,j=0;i>=minval;i--){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    printarr(arr,n);
}
void bubblesort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    printarr(arr,n);
}
void selectionsort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int greater=i;
        for(int j=i+1;j<n;j++){
            if(arr[greater]<arr[j]){
                greater =j;
            }
        }
        swap(arr[i],arr[greater]);
    }
    printarr(arr,n);
}
void insertionsort(int *arr,int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]<curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;
    }
    printarr(arr,n);
}
int main(){
    int arr[]={2,5,4,1,6,2,0,3};
    int n=sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    selectionsort(arr,n);
    insertionsort(arr,n);
    countingsort(arr,n);
    return 0;
}