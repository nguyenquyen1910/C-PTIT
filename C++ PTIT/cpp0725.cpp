#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long C(int n,int r){
    if(r==0 || r==n) return 1;
    if(r==1) return n;
    return C(n-1,r-1)+C(n-1,r);
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,r;cin>>n>>r;
        cout << C(n,r)%mod << endl;
    }
    return 0;
}