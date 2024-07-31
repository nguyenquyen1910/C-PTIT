#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        ll x,y,p;cin>>x>>y>>p;
        ll sum=1;
        while(y--) sum=(sum*x)%p;
        cout << sum << endl;
    }
    return 0;
}