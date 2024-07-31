#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<long long,bool> mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[x]=true;
        }
        for(int i=0;i<n;i++){
            if(mp[i]){
                cout << i << " ";
            }
            else cout << -1 << " ";
        }
        cout << endl;
    }
    return 0;
}