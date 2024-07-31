#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;getline(cin,s);
        vector<char> v;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                v.push_back(s[i]);
            }
        }
        if(v[0]=='8'){
            cout << "0";
            for(int i=2;i<v.size();i++){
                cout << v[i];
            }
        }
        else{
            for(int i=0;i<v.size();i++){
                cout << v[i];
            }
        }
        cout << endl;
    }
    return 0;
}