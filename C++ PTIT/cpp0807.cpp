#include<bits/stdc++.h>
using namespace std;
int main(){
    fstream file;
    file.open("DATA.in");
    int n,m;vector<int> v;
    set<int> s1,s2;
    while(file >> n){
        v.push_back(n);
    }
    for(int i=2;i<v[0]+2;i++){
        s1.insert(v[i]);
    }
    for(int i=v[0]+2;i<v.size();i++){
        s2.insert(v[i]);
    }
    for(auto x : s1){
        if(s2.count(x)){
            cout << x << " ";
        }
    }
    return 0;
}