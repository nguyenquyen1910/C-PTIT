#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int cnt[100001]={};
        for(int i=0;i<s.size();i++){
            cnt[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(cnt[s[i]]==1){
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}