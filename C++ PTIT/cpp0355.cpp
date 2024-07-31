#include<bits/stdc++.h>
using namespace std;
void inthuong(string &s){
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
}
void inhoa(string &s){
    s[0]=toupper(s[0]);
}
int main(){
    string s;
    vector<string> v;
    while(cin >> s){
        inthuong(s);
        v.push_back(s);
    }
    int check=1;
    for(auto x : v){
        if(check){
            inhoa(x);
            check=0;
        }
        char it=x[x.size()-1];
        if(it=='.' || it=='?' || it=='!'){
            x.pop_back();
            cout << x << endl;
            check=1;
        }
        else{
            cout << x << " ";
        }
    }
    return 0;
}