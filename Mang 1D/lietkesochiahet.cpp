#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int res=0;
        for(int i=0;i<n;i++){
            res=gcd(res,a[i]);
        }
        if(res==1){
            cout << 0 << endl;
            continue;
        }
        int cnt=1;
        for(int i=2;i<=sqrt(res);i++){
            if(res%i==0){
                cnt++;
                if(i!=res/i) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}