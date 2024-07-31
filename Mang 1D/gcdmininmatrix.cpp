#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
void solve(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            mp[i]++;
            if(i!=n/i){
                mp[n/i]++;
            }
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            solve(a[i]);
        }
        int res=1;
        for(auto x : mp){
            if(x.second>=2){
                res=x.first;
            }
        }
        cout << res << endl;
        mp.clear();
    }
    return 0;
}