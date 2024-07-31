#include<bits/stdc++.h>
using namespace std;
bool check(string &s){
    int l=0,r=s.size()-1;
    while(l<=r){
        if(s[l]!=s[r]){
            return false;
        }
        ++l;--r;
    }
    return true;
}
bool check2(string &s){
    for(int i=0;i<s.size();i++){
        if(s[i]%2!=0)
            return false;
    }
    return true;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        if(check(s) && check2(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}