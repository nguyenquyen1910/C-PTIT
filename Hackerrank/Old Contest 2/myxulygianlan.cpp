#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    map<string,pair<string,bool>>mp;
    cin.ignore();
    for(int i=0;i<n;i++){
        string line;getline(cin,line);
        vector<string> vname;
        stringstream ss(line);
        string tmp;
        while(ss >> tmp){
            vname.push_back(tmp);
        }
        string id=vname[0],fname="";
        for(int i=1;i<vname.size();i++){
            fname+=vname[i]+" ";
        }
        fname.pop_back();
        mp[id].first=fname;
        mp[id].second=true;
    }
    int m;cin>>m;
    set<string> se;
    for(int i=0;i<m;i++){
        string date,time,id,web;
        cin>>date>>time>>id>>web;
        if(web!="code.ptit.edu.vn"){
            mp[id].second=false;
        }
        if(web=="code.ptit.edu.vn"){
            se.insert(id);
        }
    }
    for(auto x : mp){
        cout << x.first << " " << x.second.first << " ";
        if(x.second.second==false || se.count(x.first)==0){
            cout << "FAIL\n";
        }
        else cout << "OK\n";
    }
    return 0;
}