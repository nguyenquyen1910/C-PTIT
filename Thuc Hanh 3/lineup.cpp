#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        mp.insert({x,y});
    }
    int res=0;
    for(auto x : mp){
        if(res<x.first) res=x.first;
        res+=x.second;
    }
    cout << res;
    return 0;
}