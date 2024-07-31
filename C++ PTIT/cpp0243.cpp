#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int a[n],b[m];
        set<int> se;
        vector<int> v1,v2;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
                for(int i=0;i<m;i++){
                    cin>>b[i];
            se.insert(b[i]);
        }
        for(int i=0;i<n;i++){
            if(se.count(a[i])==0){
                v1.push_back(a[i]);
            }
            else{
                v2.push_back(a[i]);
            }
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v2.size();i++){
            cout << v2[i] << " ";
        }
    }
    return 0;
}