#include<bits/stdc++.h>
using namespace std;
class Football{
    public:
        string team;
        int diem,hs;
        Football(){
            team="";
            diem=hs=0;
        }
};
bool cmp(pair<string,Football> a,pair<string,Football> b){
    if(a.second.diem!=b.second.diem){
        return a.second.diem>b.second.diem;
    }
    if(a.second.hs!=b.second.hs){
        return a.second.hs>b.second.hs;
    }
    return a.first<b.first;
}
int main(){
    string s;
    map<string,Football> mp;
    while(getline(cin,s)){
        string team1= "",team2= "";
        int i=1;
        while(s[i]!=']'){
            team1+=s[i];
            ++i;
        }
        i+=2;
        int x=0,y=0;
        while(s[i]!=' '){
            x=x*10+(s[i]-'0');
            ++i;
        }
        i+=3;
        while(s[i]!=' '){
            y=y*10+(s[i]-'0');
            ++i;
        }
        i+=2;
        while(s[i]!=']'){
            team2+=s[i];
            ++i;
        }
        if(mp.count(team1)==0){
            mp[team1].diem=0;
            mp[team1].hs=0;
        }
        if(mp.count(team2)==0){
            mp[team2].diem=0;
            mp[team2].hs=0;
        }
        if(x > y){
            mp[team1].diem += 3;
        }
        else if(x < y){
            mp[team2].diem += 3;
        }
        else{
            mp[team1].diem+=1;
            mp[team2].diem+=1;
        }
        mp[team1].hs += x-y;
        mp[team2].hs += y-x;
    }
    vector<pair<string,Football>> v;
    for(auto x : mp){
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x : v){
        cout << x.first << " " << x.second.diem << " " << x.second.hs << endl;
    }
    return 0;
}