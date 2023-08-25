#include<iostream>
#include <cmath>
using namespace std;
int n,k,m,f,g;
int main(){
    cin>>n>>k;
    f=k;
    g=pow(f, 2);
    while(k<=n){
        if((k%f)==0 & (k%g)!=0){
            m++;
        }
        k++;
    }
    cout<<m;
}
//https://codeforces.com/gym/103647/problem/B
