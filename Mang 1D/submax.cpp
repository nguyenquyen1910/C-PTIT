#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int res=INT_MIN,min_val=a[0];
        for(int i=1;i<n;i++){
            if(min_val<a[i]){
                res=max(res,a[i]-min_val);
            }
            min_val=min(min_val,a[i]);
        }
        if(res==INT_MIN) cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}