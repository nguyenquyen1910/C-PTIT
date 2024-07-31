#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>'9' || s[i]<'0'){
            return false;
        }
    }
    if(s.length()>10){
        return false;
    }
    return true;
}
int main(){
    fstream file;
    file.open("DATA.in");
    string s;long long res=0;
    while(file >> s){
        if(check(s)){
            res+=stoi(s);
        }
    }
    cout << res << endl;
    return 0;
}