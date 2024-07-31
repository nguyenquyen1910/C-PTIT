#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n],MAX=INT_MIN;
    map<int,bool> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=true;
        MAX=max(MAX,a[i]);
    }
    bool ok=false;
    vector<int> v;
    for(int i=1;i<=MAX;i++){
        if(mp[i]==false){
            v.push_back(i);
            ok=true;
        }
    }
    if(ok){
        for(int i=0;i<v.size();i++){
            cout << v[i] << endl;
        }
    }
    else cout << "Excellent!";
    return 0;
}