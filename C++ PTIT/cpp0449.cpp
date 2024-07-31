#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        int a[n];
        set<int> se;
        for(int i=0;i<n;i++){
            cin>>a[i];
            se.insert(a[i]);
        }
        int res=-1;
        for(int i=0;i<n;i++){
            int m=a[i]+x;
            if(se.find(m)!=se.end()){
                res=1;
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}