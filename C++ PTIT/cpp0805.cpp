#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
}
int main(){
    fstream file;
    set<string> hop,se1,se2;
    file.open("DATA1.in");
    string s;
    while(file >> s){
        chuanhoa(s);
        hop.insert(s);
        se1.insert(s);
    }
    file.close();
    fstream file2;
    file2.open("DATA2.in");
    string s2;
    while(file2 >> s2){
        chuanhoa(s2);
        hop.insert(s2);
        se2.insert(s2);
    }
    file2.close();
    for(auto x : hop){
        cout << x << " ";
    }
    cout << endl;
    for(auto x : se1){
        if(se2.count(x)){
            cout << x << " "; 
        }
    }
    return 0;
}