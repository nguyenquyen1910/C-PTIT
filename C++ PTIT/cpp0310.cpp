#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll maxsum(string &a,string &b){
    for(int i=0;i<a.size();i++){
        if(a[i]=='5'){
            a[i]='6';
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='5'){
            b[i]='6';
        }
    }
    ll x1=stoll(a);
    ll x2=stoll(b);
    return (x1+x2);
}
ll minsum(string &a,string &b){
    for(int i=0;i<a.size();i++){
        if(a[i]=='6'){
            a[i]='5';
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i]=='6'){
            b[i]='5';
        }
    }
    ll x1=stoll(a);
    ll x2=stoll(b);
    return (x1+x2);
}
int main(){
    int t;cin>>t;
    while(t--){
        string a,b;cin>>a>>b;
        cout << 1ll*minsum(a,b) << " " << 1ll*maxsum(a,b) << endl;
    }
    return 0;
}