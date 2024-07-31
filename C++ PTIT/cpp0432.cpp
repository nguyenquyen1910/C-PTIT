#include<bits/stdc++.h>
using namespace std;
bool cmp(string &a,string &b){
    return (a+b)<(b+a);
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<string> v;
        for(int i=0;i<n;i++) {
            string s;cin>>s;
            v.push_back(s);
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=v.size()-1;i>=0;i--){
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}