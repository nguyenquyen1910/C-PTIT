#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string a,b;cin>>a>>b;
        int dd[26]={},s=INT_MAX,l,r;
        map<char,int> mp1;
        for(int i=0;i<b.size();i++){
            mp1[b[i]]++;
        }
        for(int i=0;i<a.size();i++){
            map<char,int> mp2;
            for(int j=i;j<a.size();j++){
                mp2[a[j]]++;
                bool check=0;
                for(int k=0;k<26;k++){
                    if(mp2[k+'a']<mp1[k+'a']){
                        check=1;
                        break;
                    }
                }
                if(!check && s>j-i+1){
                    s=j-i+1;
                    l=i;
                    r=j;
                }
            }
        }
        if(s==INT_MAX) cout << "-1\n";
        else{
            for(int i=l;i<=r;i++){
                cout << a[i];
            }
            cout << endl;
        }
    }
    return 0;
}