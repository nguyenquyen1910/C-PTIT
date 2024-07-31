#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        map<int,bool> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]=true;
        }
        for(int i=1;i<=1000000;i++){
            if(mp[i]==false){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}