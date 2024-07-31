#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(s[i]=='+'){
                s[i]=' ';
            }
        }
        stringstream ss(s);
        map<int,int> mp;
        string tmp;vector<string> v;
        while(ss >> tmp){
            v.push_back(tmp);
        }
        int i=0;
        while(i<v.size()){
            string tam=v[i];
            int k=0,heso=0,bac=0;
            while(k<tam.size()){
                if(isdigit(tam[k])){
                    heso=heso*10+(tam[k]-'0');
                    ++k;
                }
                k+=2;
                if(k<tam.size()){
                    bac=bac*10+(tam[k]-'0');
                    ++k;
                }
            } 
            mp[bac]+=heso;
            ++i;
        }
        string res="";
        for(auto x : mp){
            res=res+to_string(x.second)+"x^"+to_string(x.first)+" + ";
        }
        res.pop_back();
        res.pop_back();
        cout << res << endl;
    }
    return 0;
}