#include<bits/stdc++.h>
using namespace std;
int sumdigit(string &s){
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            sum+=s[i]-'0';
        }
    }
    return sum;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                continue;
            }
            else cout << s[i];
        }
        cout << sumdigit(s) << endl;
    }
    return 0;
}