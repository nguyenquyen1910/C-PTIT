#include<bits/stdc++.h>
using namespace std;
bool check(vector<string> &v){ 
    for(auto it : v){
        int tmp=0;
        for(char x : it){
            if(!isdigit(x)) return false;
            tmp=tmp*10+(x-'0');
        }
        if(tmp<0 || tmp>255)
            return false;
    }
    return true;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        stringstream ss(s);
        vector<string> v;
        while(getline(ss,s,'.')){
            v.push_back(s);
        }
        if(check(v)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}