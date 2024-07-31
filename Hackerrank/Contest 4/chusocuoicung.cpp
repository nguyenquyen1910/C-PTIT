#include<bits/stdc++.h>
using namespace std;
long long find(long long a,long long b, long long mod){
    long long res=1;
    while(b>0){
        if(b%2==1){
            res=res*a%mod;
        }
        b/=2;
        a=a*a%mod;
    }
    return res;
}
int main(){
    long long n,m,k;cin>>n>>m>>k;
    long long mod=1;
    for(int i=0;i<k;i++){
        mod*=10;
    }
    cout << find(n,m,mod);
    return 0;
}