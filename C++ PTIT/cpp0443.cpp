#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        map<int,bool> mp;
        for(int i=0;i<n-1;i++){
            cin>>a[i];
            mp[a[i]]=true;
        }
        for(int i=1;i<10000001;i++){
            if(mp[i]==false){
                cout << i;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}