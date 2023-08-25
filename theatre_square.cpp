#include<iostream>
#include <stdio.h>
using namespace std;
long long m,n,a;

int main(){
    cin>>m>>n>>a;
    cout<<((m+a-1)/a)*((n+a-1)/a);
}
//https://codeforces.com/contest/1/problem/A
