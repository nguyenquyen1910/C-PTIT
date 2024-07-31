#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int> a,pair<string,int> b){
    if(a.second!=b.second)
        return a.second>b.second;
    return a.first<b.first;
}
int main(){
    string s;
    map<string,int> mp;
    while(getline(cin,s)){
        string team1="",team2="";
        int tmp;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                tmp=i;
                break;
            }
        }
        for(int i=0;i<tmp-1;i++){
            team1+=s[i];
        }
        if(team1=="") team1="28Tech Football Club";
        int x=0,y=0,k;
        k=team1.size()+1;
        while(s[k]!=' '){
            x=x*10+s[k]-'0';
            ++k;
        }
        k+=3;
        while(s[k]!=' '){
            y=y*10+s[k]-'0';
            ++k;
        }
        k+=1;
        while(k<s.size()){
            team2+=s[k];
            ++k;
        }
        mp[team1]+=x;
        mp[team2]+=y;
    }
    vector<pair<string,int>> v;
    for(auto x : mp){
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x : v){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}