#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        set<int> se;
        for(int j=0;j<n;j++){
            se.insert(a[i][j]);
        }
        for(auto x : se){
            mp[x]++;
        }
    }
    vector<int> v;
    for(auto x : mp){
        if(x.second>=n){
            v.push_back(x.first);
        }
    }
    if(v.size()==0) cout << "NOT FOUND\n";
    else{
        for(int i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
    }
    return 0;
}