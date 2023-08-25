#include<iostream>
#include <stdio.h>
using namespace std;
int i,t,x,y,b,arr;
int main(){
    string a;
    cin>>a;
    int size=a.size();
    for(i=0;i<size;i++){
        if(a.at(x)==a.at(x+1)){
            b++;
        }else b=0;
        x++;
        if(b>=6){
            cout<<"YES";
            break;
        }
        if((x+1)==size) break;
    }
    if (b<6) cout<<"NO";

}

//https://codeforces.com/contest/96/submission/180247763

