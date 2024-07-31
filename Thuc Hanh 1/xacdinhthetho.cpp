#include<bits/stdc++.h>
using namespace std;
int lengthstring(string s){
    vector<string> v;
    stringstream ss(s);
    string token;
    while(ss >> token){
        v.push_back(token);
    }
    return v.size();
}
int main(){
    int n;cin>>n;
    cin.ignore();
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;getline(cin,s);
        v.push_back(s);
    }
    int i=0,cnt=0;
    bool check=1;
    vector<int> ty;
    while(i<n){
        if(lengthstring(v[i])==6){
            if(check){
                cnt++;
                check=0;
                ty.push_back(1);
            }
            i+=2;
        }
        else{
            check=1;
            cnt++;
            i+=4;
            ty.push_back(2);
        }
    }
    cout << ty.size() << endl;
    for(auto x : ty) cout << x << endl;
    return 0;
}