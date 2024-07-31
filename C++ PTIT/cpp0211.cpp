#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll> v(n),N(n+1,INT_MIN);
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=n-1;i>=0;i--){
            N[i]=max(N[i+1],v[i]);
        }
        int res=0;
        for(int i=0;i<n;i++){
            int l=i+1,r=n-1,ans=i;
            while(l<=r){
                int m=(l+r)/2;
                if(v[i]<=N[m]){
                    ans=max(ans,m);
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }
            res=max(res,ans-i);
        }
        cout << res << endl;
    }
    return 0;
}