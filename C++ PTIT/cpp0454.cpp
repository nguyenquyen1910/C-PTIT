#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            v[i]*=v[i];
        }
        sort(v.begin(),v.end());
        bool check=false;
        for(int i=n-2;i>=2;i--){
            int l=0,r=n-1;
            while(l<r){
                if(v[l]+v[r]==v[i]){
                    check=true;
                    break;
                }
                else if(v[l]+v[r]<v[i]){
                    ++l;
                }
                else --r;
            }
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}