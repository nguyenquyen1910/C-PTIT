#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int res=0;
        for(auto x : mp){
            if(x.second>1){
                res+=x.second;
            }
        }
        cout << res << endl;
    }
    return 0;
}