#include<bits/stdc++.h>
using namespace std;
int countstep(int *a,int n,int k){
    int m=0;
    for(int i=0;i<n;i++){
        if(a[i]<=k) ++m;
    }
    int q=0;
    for(int i=0;i<m;i++){
        if(a[i]>k) ++q;
    }
    int p=q;
    for(int i=0,j=m;j<n;i++,j++){
        if(a[i]>k) --q;
        if(a[j]>k) ++q;
        p=min(p,q);
    }
    return p;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int a[n];
        for(int &x : a) cin>>x;
        cout << countstep(a,n,k) << endl;
    }
    return 0;
}