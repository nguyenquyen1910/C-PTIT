#include<bits/stdc++.h>
using namespace std;
long long Mul(long long a,long long b,long long c){
    if(b==0) return 0;
    if(b==1) return a%c;
    long long tmp=Mul(a,b/2,c);
    long long res=2*tmp%c;
    if(b%2==1) return (res+a)%c;
    return res;
}
int main(){
    int t;cin>>t;
    while(t--){
        long long a,b,c;cin>>a>>b>>c;
        cout << Mul(a,b,c) << endl;
    }
    return 0;
}