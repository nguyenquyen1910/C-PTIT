#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        vector<ll> v;
        int cnt=0;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            if(x!=0){
                v.push_back(x);
            }
            else cnt++;
        }
        for(int i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
        for(int i=0;i<cnt;i++){
            cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}