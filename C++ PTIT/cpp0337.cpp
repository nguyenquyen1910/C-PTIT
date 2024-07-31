#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string a,b;cin>>a>>b;
        map<char,int> mp1;
        int res=INT_MAX,l,r;
        for(int i=0;i<b.size();i++){
            mp1[b[i]]++;
        }
        for(int i=0;i<a.size();i++){
            map<char,int> mp2;
            for(int j=i;j<a.size();j++){
                mp2[a[j]]++;
                bool check=true;
                for(int k=0;k<26;k++){
                    if(mp2[k+'a']<mp1[k+'a']){
                        check=false;
                        break;
                    }
                }
                if(check && res<j-i+1){
                    res=j-i+1;
                    l=i;
                    r=j;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}