#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;getline(cin,s);
        int cnt=1;
        for(int i=0;i<s.size();i++){
            if((s[i-1]==' ' || s[i-1]=='\t') && s[i]>='a' && s[i]<='z'){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}