#include<bits/stdc++.h>
using namespace std;
long long F[1000007],mod=1e9+7;
void khtao(){
    F[1]=1;
    F[2]=1;
    for(int i=3;i<=1000001;i++){
        F[i]=2*F[i-1]+3*F[i-2];
        F[i]%=mod;
    }
}
int main(){
    khtao();
    int n;cin>>n;
    cout << F[n];
    return 0;
}