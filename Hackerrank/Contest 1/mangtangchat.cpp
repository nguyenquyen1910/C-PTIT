#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;cin>>n>>d;
    int a[n];
    for(auto &x : a) cin>>x;
    long long cnt=0;
    for(int i=0;i<n-1;i++){
        if(a[i+1]<=a[i]){
            int di=a[i]-a[i+1];
            int res=di/d+1;
            cnt+=res;
            a[i+1]+=res*d;
        }
    }
    cout << cnt;
    return 0;
}