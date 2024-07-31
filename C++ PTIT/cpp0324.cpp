#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;cin>>t;
    while(t--){
        string a;cin>>a;
        ll b,M;cin>>b>>M;
        ll n=0,tmp=1;
        for(int i=0;i<a.size();i++){
            n=n*10+(a[i]-'0');
            n%=M;
        }
        while(b-1!=0){
            if(b%2){
                tmp=(tmp*n)%M;
            }
            n=(n*n)%M;
            b/=2;
        }
        cout << (n*tmp)%M << endl;
    }
    return 0;
}