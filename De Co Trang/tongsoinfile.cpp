#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    if(s.size()>=9){
        return false;
    }
    else{
        for(int i=0;i<s.size();i++){
            if(!isdigit(s[i])){
                return false;
            }
        }
    }
    return true;
}
int main(){
    ifstream filein;
    filein.open("DATA.in",ios_base::in);
    string s;
    long long sum=0;
    while(filein>>s){
        if(check(s)){
            sum+=stoi(s);
        }
    }
    cout << sum;
    return 0;
}