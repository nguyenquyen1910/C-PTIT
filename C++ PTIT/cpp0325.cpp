#include<bits/stdc++.h>
using namespace std;
bool check(string &s){
    int sume=0,sumo=0;
    for(int i=0;i<s.size();i++){
        if(i%2==0){
            sume+=s[i]-'0';
        }
        else{
            sumo+=s[i]-'0';
        }
    }
    return (sumo-sume)%11==0;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        if(check(s)) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}