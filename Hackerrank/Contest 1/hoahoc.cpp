#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> mp;
    for(int i=1;i<=10;i++){
        string s;
        int n;
        cin>>s>>n;
        mp[s]=n;
    }
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int ntk=0;
        int i=0;
        while(i<s.size()){
            string nt="";
            while(isalpha(s[i])){
                nt+=s[i];
                ++i;
            }
            int sl=0;
            while(isdigit(s[i])){
                sl=sl*10+(s[i]-'0');
                ++i;
            }
            ntk+=mp[nt]*sl;
        }
        cout << ntk << endl;
    }
    return 0;
}