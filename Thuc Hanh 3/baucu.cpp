#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> &a,pair<int,int> &b){
    if(a.second!=b.second)
        return a.second<b.second;
    return a.first<b.first;
}
int main(){
    int n,m;cin>>n>>m;
    int a[n];map<int,int> mp;
    pair<int,int> pa[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    vector<pair<int,int>> v;
    for(auto x : mp){
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    int idx=v.size()-2,tmp=v[v.size()-1].second;
    while(v[idx].second==tmp) idx--;//Tìm phần tử có số lần xuất hiện bằng số lần xuất hiện nhiều nhất
    if(idx<0) cout << "NONE";
    cout << v[idx].first;
    return 0;
}