#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
}
int main(){
    fstream file;
    file.open("VANBAN.in");
    string s;
    set<string> se;
    while(file >> s){
        chuanhoa(s);
        se.insert(s);
    }
    file.close();
    for(auto x : se){
        cout << x << endl;
    }
    return 0;
}