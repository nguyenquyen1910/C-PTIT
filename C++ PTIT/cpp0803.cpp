#include<bits/stdc++.h>
using namespace std;
int main(){
    fstream file;
    file.open("DATA.in");
    map<int,int> mp;
    int n;
    while(file >> n){
        mp[n]++;
    }
    file.close();
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}