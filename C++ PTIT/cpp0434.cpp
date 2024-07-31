#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        vector<ll> v;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        v.push_back(a[0]*a[1]);
        for(int i=1;i<n-1;i++){
            v.push_back(a[i-1]*a[i+1]);
        }
        v.push_back(a[n-2]*a[n-1]);
        for(int i=0;i<n;i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}