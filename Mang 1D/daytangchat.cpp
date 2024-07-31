#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,d;cin>>n>>d;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    long long ans=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            long long cl=(a[i-1]-a[i]+1);
            long long ct;
            if(cl%d==0){
                ct=cl/d;
            }
            else ct=cl/d+1;
            ans+=ct;
            a[i]+=ct*d;
        }
    }
    cout << ans << endl;
    return 0;
}