#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int> a,pair<string,int> b){
    if(a.second!=b.second){
        return a.second>b.second;
    }
    return a.first<b.first;
}
int main(){
    string s;
    map<string,int> mp;
    while(getline(cin,s)){
        string team1="",team2="";
        int tmp,tmp2;
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
        for(int i=s.size()-1;i>=0;i--){
            if(isdigit(s[i])){
                tmp2=i;
                break;
            }
        }
        for(int i=tmp2+2;i<s.size();i++){
            team2+=s[i];
        }
        if(team2=="ech Football Club"){
            team2="28Tech Football Club";
        }
        int x=0,y=0;
        if(team1=="28Tech Football Club"){
            int ma=team1.size()+1;
            while(s[ma]!=' '){
                x=x*10+s[ma]-'0';
                ma++;
            }
        }
        else{
            while(s[tmp]!=' '){
                x=x*10+s[tmp]-'0';
                ++tmp;
            }
        }
        mp[team1]+=x;
        if(team1=="28Tech Football Club"){
            int ma=team1.size()+1+to_string(x).size()+3;
            while(s[ma]!=' '){
                y=y*10+s[ma]-'0';
                ma++;
            }
        }
        else{
            int ma=team1.size()+1+to_string(x).size()+3;
            while(s[ma]!=' '){
                y=y*10+s[ma]-'0';
                ma++;
            }
        }
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