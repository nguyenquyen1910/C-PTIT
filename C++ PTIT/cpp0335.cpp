#include<bits/stdc++.h>
using namespace std;
int maxinstring(string &s){
    int max_num=INT_MIN,k=0;
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
        max_num=max(max_num,sum1);
    }
    return max_num;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        cout << maxinstring(s) << endl;
    }
    return 0;
}