#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        ll a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        set<int> se;
        for(int i=0;i<n;i++){
            while(a[i]>0){
                se.insert(a[i]%10);
                a[i]/=10;
            }
        }
        for(auto x : se) cout << x << " ";
        cout << endl;
    }
    return 0;
}