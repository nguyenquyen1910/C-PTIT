#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    string s;
    cin.ignore(); 
    map<string,int> mp;   
    while(t--){
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while(ss >> tmp){
            for(int i=0;i<tmp.size();i++){
                tmp[i]=tolower(tmp[i]);
            }
            v.push_back(tmp);
        }
        string email="";
        email+=v[v.size()-1];
        for(int i=0;i<v.size()-1;i++){
            email+=tolower(v[i][0]);
        }
        if(mp[email]!=0){
            cout << email << to_string(mp[email]+1) << "@ptit.edu.vn" << endl;
        }
        else cout << email <<  "@ptit.edu.vn" << endl;
        mp[email]++;
    }
    return 0;
}