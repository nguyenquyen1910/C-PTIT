#include<bits/stdc++.h>
using namespace std;
#define e 1000000
int prime[1000001];
void sieve(){
    prime[0]=prime[1]=0;
    for(int i=2;i<=e;i++){
        prime[i]=1;
    }
    for(int i=2;i<=sqrt(e);i++){
        if(prime[i]){
            for(int j=i*i;j<=e;j+=i){
                prime[j]=0;
            }
        }
    }
}
int F[1000001];
int main(){
    sieve();
    F[0]=0;
    F[1]=0;
    int cnt=0;
    for(int i=2;i<1000001;i++){
        if(prime[i]) cnt++;
        F[i]=cnt;
    }
    int t;cin>>t;
    while(t--){
        int l,r;cin>>l>>r;
        if(l==0) cout << F[r] << endl;
        else cout << F[r]-F[l-1] << endl;
    }
    return 0;
}