#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        map<ll,bool> mp;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            mp[x]=true;
        }
        for(int i=0;i<n;i++){
            if(mp[i]){
                cout << i << " ";
            }
            else cout << -1 << " ";
        }
        cout << endl;
    }
    return 0;
}