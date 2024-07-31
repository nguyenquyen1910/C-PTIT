#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int res=0;
        for(char x : s){
            res=(2*res+(x-'0'))%5;
        }
        if(res==0) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}