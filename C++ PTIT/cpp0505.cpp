#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct NhanVien{
    string id,name,gt,ns,dc,ms,date;
};
void nhap(NhanVien &a){
    a.id="00001";
    getline(cin,a.name);
    cin>>a.gt>>a.ns;
    cin.ignore();
    getline(cin,a.dc);
    cin>>a.ms>>a.date;
    if(a.ns[1]=='/'){
        a.ns="0"+a.ns;
    }
    if(a.ns[4]=='/'){
        a.ns.insert(3,"0");
    }
    if(a.date[1]=='/'){
        a.date="0"+a.date;
    }
    if(a.date[4]=='/'){
        a.date.insert(3,"0");
    }
}
void in(NhanVien a){
    cout << a.id << " " << a.name << " " << a.gt << " " << a.ns << " ";
    cout << a.dc << " " << a.ms << " " << a.date;
}  
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}