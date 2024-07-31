#include<bits/stdc++.h>
using namespace std;
int check(string &s){
    set<char> se;
    for(int i=0;i<s.size();i++){
        if(!isdigit(s[i]) || s[0]=='0'){
            return -1;
        }
        se.insert(s[i]);
    }
    if(se.size()!=10)
        return 0;
    return 1;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        if(check(s)==-1) cout << "INVALID\n";
        else if(check(s)==1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}