#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long ans=0;
    for(int i=0;i<n;i++){
        auto it=upper_bound(a+i+1,a+n,k-a[i]);
        ans+=a+n-it;
    }
    cout << ans;
    return 0;
}