#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int cnt=0;
        int r=n-1;
        while(cnt<k){
            cout << a[r] << " ";
            --r;
            ++cnt;
        }
        cout << endl;
    }
    return 0;
}