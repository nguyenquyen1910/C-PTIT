#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
istream& operator >> (istream& in,vi& a){
    string s;in>>s;
    a.clear();
    for(int i=0;i<s.size();i++){
        a.push_back(s[i]-'0');
    }
    return in;
}
ostream& operator << (ostream& out,const vi& a){
    for(auto x : a){
        out << x;
    }
    return out;
}
void del_zero(vi &a){ 
    reverse(a.begin(), a.end()); 
    while (a.size() >= 2) 
        if (a.back() == 0) 
            a.pop_back();
        else 
            break;
    reverse(a.begin(), a.end());
}
vi operator * (vi a,vi b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    vi c(a.size()+b.size()+1);
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            c[i+j]+=a[i]*b[j];
            c[i+j+1]+=c[i+j]/10;
            c[i+j]%=10;
        }
    }
    c.push_back(0);
    for(int i=0;i<c.size()-1;i++){
        c[i+1]+=c[i]/10;
        c[i]%=10;
    }
    reverse(c.begin(),c.end());
    del_zero(c);
    return c;
}
int main(){
    vi a,b;
    cin>>a>>b;
    cout << a*b;
    return 0;
}