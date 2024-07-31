#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
}
void chuanhoapl(string &s){
    for(int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);
    }
}
int main(){
    string s;getline(cin,s);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss >> tmp){
        chuanhoa(tmp);
        v.push_back(tmp);
    }
    for(int i=0;i<v.size()-1;i++){
        cout << v[i];
        if(i!=v.size()-2){
            cout << " ";
        }
        else cout << ", ";
    }
    chuanhoapl(v[v.size()-1]);
    cout << v[v.size()-1];
    return 0;
}