#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string n;cin>>n;
        long long m;cin>>m;
        long long tmp=0;
        for(int i=0;i<n.size();i++){
            tmp=tmp*10+(n[i]-'0');
            tmp%=m;
        }
        cout << tmp << endl;
    }
    return 0;
}