#include<bits/stdc++.h>
using namespace std;
class TimeNet{
    public:
        string user,pass,name,begin,end;
        int bd,kt,timen,gio,phut;
        TimeNet(){
            user=pass=name=begin=end="";
            bd=kt=timen=gio=phut=0;
        }
        friend istream& operator >> (istream&,TimeNet&);
        friend ostream& operator << (ostream&,TimeNet);
};
istream& operator >> (istream& in,TimeNet& a){
    in>>a.user>>a.pass;
    in.ignore();
    getline(in,a.name);
    in>>a.begin>>a.end;
    a.bd=((a.begin[0]-'0')*10+(a.begin[1]-'0'))*60+((a.begin[3]-'0')*10+(a.begin[4]-'0'));
    a.kt=((a.end[0]-'0')*10+(a.end[1]-'0'))*60+((a.end[3]-'0')*10+(a.end[4]-'0'));
    a.timen=a.kt-a.bd;
    a.gio=a.timen/60;
    a.phut=a.timen%60;
    return in;
}
bool cmp(TimeNet a,TimeNet b){
    if(a.timen!=b.timen){
        return a.timen>b.timen;
    }
    return a.user<b.user;
}
void sapxep(TimeNet *a,int n){
    sort(a,a+n,cmp);
}
ostream& operator << (ostream& out,TimeNet a){
    out << a.user << " " << a.pass << " " << a.name << " " << a.gio << " gio " << a.phut << " phut " << endl;
    return out;
}
int main(){
    int n;cin>>n;
    TimeNet a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sapxep(a,n);
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    return 0;
}