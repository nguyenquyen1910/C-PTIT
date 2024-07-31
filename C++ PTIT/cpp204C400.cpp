#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string id,name,cl,ns;
    float gpa;
};
void nhapThongTinSV(SinhVien &a){
    a.id="N20DCCN001";
    getline(cin,a.name);
    cin>>a.cl>>a.ns;
    cin>>a.gpa;
    if(a.ns[1]=='/'){
        a.ns="0"+a.ns;
    }
    if(a.ns[4]=='/'){
        a.ns.insert(3,"0");
    }
}
void inThongTinSV(SinhVien a){
    cout << a.id << " " << a.name << " " << a.cl << " " << a.ns << " ";
    cout << fixed << setprecision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}