#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int sumnum(ll n){
    if(n<10)
        return n;
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sumnum(sum);
}
int check(string &a){
    int sum=0;
    for(char x : a){
        sum+=x-'0';
    }
    if(sumnum(sum)==9)
        return 1;
    return 0;
}
int main(){
    int t;cin>>t;
    while(t--){
        string a;cin>>a;
        cout << check(a) << endl;
    }
    return 0;
}