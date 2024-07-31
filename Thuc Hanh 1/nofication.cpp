#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    cin.ignore();
    string s;
    while(t--){
        getline(cin,s);
        int length=0;
        stringstream ss(s);
        string newline="";
        while(ss >> s){
            if(length+s.length()+1<=100){
                newline+=s+" ";
                length+=s.length()+1;
            }
            else break;
        }
        cout << newline << endl;
    }
    return 0;
}