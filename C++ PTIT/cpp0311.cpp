#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        map<char,int> mp;
        for(char x : s){
            mp[x]++;
        }
        int res=0;
        for(char x : s){
            if(mp[x]>s.size()/2+(s.size()%2==0 ? 0 : 1)){
                res=0;
            }
            else res=1;
        }
        cout << res << endl;
    }
    return 0;
}