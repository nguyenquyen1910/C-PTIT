#include<bits/stdc++.h>
using namespace std;
class MonThi;
class CaThi;
map<string,MonThi> mp;
class MonThi{
    friend class CaThi;
    public:
        string id,name;
        MonThi(){
            id=name="";
        }
        friend istream& operator >> (istream& in, MonThi& a){
            in>>a.id;
            in.ignore();
            getline(in,a.name);
            mp[a.id]=a;
            return in;
        }
};
int cnt=0;
class CaThi{
    public:
        string stt,id,date,time,cs;
        int d,m,h,mi;
        CaThi(){
            stt=id=date=time=cs="";
            d=m=h=mi=0;
        }
        friend istream& operator >> (istream& in,CaThi& a){
            cnt++;
            a.stt="T"+string(3-to_string(cnt).size(),'0')+to_string(cnt);
            in>>a.id>>a.date>>a.time>>a.cs;
            a.d=(a.date[0]-'0')*10+a.date[1]-'0';
            a.m=(a.date[3]-'0')*10+a.date[4]-'0';
            a.h=(a.time[0]-'0')*10+a.time[1]-'0';
            a.mi=(a.time[3]-'0')*10+a.time[4]-'0';
            return in;
        }
        friend ostream& operator << (ostream& out, CaThi a){
            out << a.stt << " " << a.id << " " << mp[a.id].name << " ";
            out << a.date << " " << a.time << " " << a.cs << endl;
            return out;
        }
};
bool cmp(CaThi a,CaThi b){
    if(a.date!=b.date){
        if(a.m!=b.m) return a.m<b.m;
        else if(a.d!=b.d) return a.d<b.d;
    }
    else if(a.time!=b.time){
        if(a.h!=b.h) return a.h<b.h;
        return a.mi<b.mi;
    }
    return a.id<b.id;
}
int main(){
    int n,m;cin>>n>>m;
    MonThi a[n];
    CaThi b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(b,b+m,cmp);
    for(int i=0;i<m;i++) cout << b[i];
    return 0;
}