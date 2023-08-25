#include <bits/stdc++.h>
using namespace std;
int i,n,k,a,b,x,s;
pair<int,int> d[1000];

int main()
{
    cin>>s>>n;
    for(i=0;i<n;i++){
        cin>>d[i].first>>d[i].second;
    }
    sort(d,d+n);
    for(i=0;i<n;i++){
        if(s>d[i].first) s=s+d[i].second;
        else {cout<<"NO"; return 0;}
    }
    cout<<"YES";
}
//https://codeforces.com/contest/230/problem/A
