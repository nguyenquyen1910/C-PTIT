#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<int> a(n),b;vector<int> v;
        int it;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0) v.push_back(a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]==*max_element(a.begin(),a.end())){
                it=i;
                break;
            }
        }
        for(int i=0;i<it;i++){
            b.push_back(a[i]);
        }
        b.push_back(m);
        for(int i=it;i<n;i++){
            b.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++){
            if(b[i]>=0) v.push_back(b[i]); 
        }
        for(int i=0;i<b.size();i++){
            cout << v[i] << " ";
        }
    }
    return 0;
}