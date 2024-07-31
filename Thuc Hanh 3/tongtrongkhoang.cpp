#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        int a[n],P[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            P[i]=P[i-1]+a[i];
        }
        while(q--){
            int l,r;cin>>l>>r;
            cout << P[r]-P[l-1] << endl;
        }
    }
    return 0;
}