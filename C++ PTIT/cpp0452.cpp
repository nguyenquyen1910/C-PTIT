#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n1,n2,n3;cin>>n1>>n2>>n3;
        set<ll> se1,se2,se3;
        ll v1[n1],v2[n2],v3[n3];
        for(int i=0;i<n1;i++){
            cin>>v1[i];
            se1.insert(v1[i]);
        }
        for(int i=0;i<n2;i++){
            cin>>v2[i];
            se2.insert(v2[i]);
        }
        for(int i=0;i<n3;i++){
            cin>>v3[i];
            se3.insert(v3[i]);
        }
        bool check=false;
        for(ll x : se1){
            if(se2.count(x)){
                if(se3.count(x)){
                    cout << x << " ";
                    check=true;
                }
            }
        }
        if(check==false) cout << -1;
        cout << endl;
    }
    return 0;
}