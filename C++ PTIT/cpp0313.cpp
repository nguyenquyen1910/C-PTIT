#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;getline(cin,a);
    string b;cin>>b;
    stringstream ss(a);
    string tmp;
    while(ss >> tmp){
        if(tmp!=b){
            cout << tmp << " ";
        }
    }
    return 0;
}