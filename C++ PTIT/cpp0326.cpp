#include<bits/stdc++.h>
using namespace std;
string sum(string a,string b){
    string res;
    if(a.size()<b.size()) swap(a,b);
    while(a.size()!=b.size()) b="0"+b;
    int carry=0;
    for(int i=a.size()-1;i>=0;i--){
        int x=(a[i]-'0')+(b[i]-'0')+carry;
        carry=x/10;
        res.push_back(x%10+'0');
    }
    if(carry>0) res.push_back(carry+'0');
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    int t;cin>>t;
    while(t--){
        string a,b;cin>>a>>b;
        string c;
        vector<string> v(10,"0");
        v[1]=b;
        for(int i=2;i<10;i++){
            v[i]=sum(v[i-1],b);
        }
        for(int i=0;i<a.size();i++){
            c.push_back('0');
            c=sum(c,v[a[i]-'0']);
        }
        cout << c << endl;
    }
    return 0;
}