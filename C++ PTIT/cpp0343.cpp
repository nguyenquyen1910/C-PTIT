#include<bits/stdc++.h>
using namespace std;
bool check(string &s){
    return (s[s.size()-1]-'0')%2==0;
}
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;getline(cin,s);
        vector<string> v;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            v.push_back(tmp);
        }
        int cnt1=0,cnt2=0;
        for(int i=0;i<v.size();i++){
            if(check(v[i])){
                cnt1++;
            }
            else cnt2++;
        }
        if((v.size()%2==0 && cnt1>cnt2) || (v.size()%2!=0 && cnt1<cnt2)){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}