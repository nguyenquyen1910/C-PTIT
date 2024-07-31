#include<bits/stdc++.h>
using namespace std;
int suminstring(string &s){
    int sum=0,k=0;
    while(k!=s.size()){
        int sum1=0;
        if(isdigit(s[k])){
            while(isdigit(s[k])){
                sum1=sum1*10+(s[k]-'0');
                ++k;
            }
        }
        else{ 
            ++k;
        }
        sum+=sum1;
    }
    return sum;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        cout << suminstring(s) << endl;
    }
    return 0;
}