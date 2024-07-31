#include<bits/stdc++.h>
using namespace std;
//Tính giá trị đa thức P = a[n-1]*x^n-1+a[n-2]*x^n-2+...+a[0]
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long res=0,lt=1;
        long long mod=1e9+7;
        for(int i=n-1;i>=0;i--){
            res+=a[i]*lt;
            res%=mod;
            lt*=x;
            lt%=mod;
        }
        cout << res << endl;
    }
    return 0;
}