#include<iostream>
#include <stdio.h>
using namespace std;

int i,t,a,b,arr,index;
int main(){
    int size;
    cin>>size>>index;
    int arr[size];
    index=index-1;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    for(t=0;t<size;t++){
        if(arr[t]>=arr[index] & arr[t]>0) a++;
    }
    cout<<a;
}
//https://codeforces.com/contest/158/problem/A
