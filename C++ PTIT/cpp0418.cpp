#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int a[n],b[m];
        set<int> hop,se1,se2;
        for(int i=0;i<n;i++){ 
            cin>>a[i];
            hop.insert(a[i]);
            se1.insert(a[i]);
        }
        for(int i=0;i<m;i++){ 
            cin>>b[i];
            hop.insert(b[i]);
            se2.insert(b[i]);
        }
        for(int x : hop) cout << x << " ";
        cout << endl;
        for(int x : se1){
            if(se2.count(x)){
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}