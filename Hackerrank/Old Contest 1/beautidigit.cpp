#include<bits/stdc++.h>
using namespace std;
bool checkbeauti(long long n){
    if(n<0) n*=-1;
    string s=to_string(n);
    for(int i=0;i<s.size();i++){
        if((i+1)%2!=(s[i]-'0')%2){
            return false;
        }
    }
    return true;
}
int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        if(checkbeauti(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}