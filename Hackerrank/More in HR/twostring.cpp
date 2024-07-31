#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
}
int main(){
    string s1,s2;
    getline(cin,s1);
    chuanhoa(s1);
    getline(cin,s2);
    chuanhoa(s2);
    set<string> se1,se2;
    stringstream ss(s1);
    string tmp;
    while(ss >> tmp){
        se1.insert(tmp);
    }
    stringstream ss2(s2);
    string tmp2;
    while(ss2 >> tmp2){
        se2.insert(tmp2);
    }
    for(auto x : se1){
        if(se2.count(x)==0){
            cout << x << " ";
        }
    }
    return 0;
}