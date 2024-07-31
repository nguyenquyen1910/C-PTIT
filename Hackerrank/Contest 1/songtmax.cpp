#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;cin>>n;
    map<ll,ll> mp;
    ll res=0,cntMax=0;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0){
            ll cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }
            mp[i]=cnt;
            if(cnt>cntMax){
                cntMax=cnt;
                res=i;
            }
            else if(cnt==cntMax){
                res=min(res,i);
            }
        }
    }
    if(n>1){
        mp[n]=1;
        if(1>cntMax){
            res=n;
        }
        else if(1==cntMax){
            res=min(res,n);
        }
    }
    cout << res << " " << mp[res];
    return 0;
}