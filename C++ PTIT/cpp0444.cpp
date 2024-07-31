#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second=i+1;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i].first==x){
                cout << v[i].second;
                break;
            }
        }
        cout << endl;
    }
    return 0;
}