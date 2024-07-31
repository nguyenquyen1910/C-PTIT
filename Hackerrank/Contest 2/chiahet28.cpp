#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    long long a[n];map<long long,long long> mp;
    for(long long i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]%28]++;
    }
    long long res=0;
    for(long long i=1;i<14;i++){
        res+=mp[i]*mp[28-i];
    }
    res+=(mp[14]-1)*mp[14]/2;
    res+=(mp[0]-1)*mp[0]/2;
    cout << res;
    return 0;
}