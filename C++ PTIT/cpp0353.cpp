#include<bits/stdc++.h>
using namespace std;
void inthuong(string &s){
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
}
bool checktn(string &s){
    int l=0,r=s.size()-1;
    while(l<=r){
        if(s[l]!=s[r]){
            return false;
        }
        ++l;--r;
    }
    return true;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        inthuong(s);
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='b' || s[i]=='c'){
                s[i]='2';
            }
            else if(s[i]=='d' || s[i]=='e' || s[i]=='f'){
                s[i]='3';
            }
            else if(s[i]=='g' || s[i]=='h' || s[i]=='i'){
                s[i]='4';
            }
            else if(s[i]=='j' || s[i]=='k' || s[i]=='l'){
                s[i]='5';
            }
            else if(s[i]=='m' || s[i]=='n' || s[i]=='o'){
                s[i]='6';
            }
            else if(s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s'){
                s[i]='7';
            }
            else if(s[i]=='t' || s[i]=='u' || s[i]=='v'){
                s[i]='8';
            }
            else if(s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z'){
                s[i]='9';
            }
        }
        if(checktn(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}