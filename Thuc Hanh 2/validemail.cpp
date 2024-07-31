#include<bits/stdc++.h>
using namespace std;
bool check(string &s){
    int i=0;
    string s1="",s2="";
    for(;i<s.size();i++){
        if(s[i]==' ') return 0;
        if(s[i]=='@') break;
        if(!isalnum(s[i]) && s[i]!='.' && s[i]!='_') return 0;
        s1+=s[i];
        if(s1.size()>64) return 0;
    }
    if(s1.size()==0) return 0;
    ++i;
    int checkdot=0;
    for(;i<s.size();i++){
        if(s[i]==' ') return 0;
        if(!isalnum(s[i]) && s[i]!='.' && s[i]!='_') return 0;
        if(s[i]=='.') checkdot++;
        s2+=s[i];
        if(s2.size()>254) return 0;
    }
    if(checkdot==0) return 0;
    else{
        if(s2[s2.size()-1]=='.') return 0;
        if(s2.size()==0) return 0;
    }
    return checkdot!=0 && s2.size()!=0; 
}
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;getline(cin,s);
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}