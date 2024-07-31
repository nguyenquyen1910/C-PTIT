#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        //Cach 1
        for(auto x : mp){
            if(x.second%2==1){
                cout << x.first << endl;
                break;
            }
        }
        //Cach 2
        int ans=a[0];
        for(int i=1;i<n;i++){
            ans^=a[i];
        }
        cout << ans << endl;
    }
    return 0;
}