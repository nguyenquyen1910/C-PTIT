#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    public:
        string id,name,lop,ns;
        double gpa;
        SinhVien(){
            id=name=lop=ns="";
            gpa=0;
        }
        friend istream& operator >> (istream&, SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
};
istream& operator >> (istream &in, SinhVien &a){
    a.id="B20DCCN001";
    getline(in,a.name);
    in>>a.lop>>a.ns>>a.gpa;
    if(a.ns[1]=='/'){
        a.ns="0"+a.ns;
    }
    if(a.ns[4]=='/'){
        a.ns.insert(3,"0");
    }
    return in;
}
ostream& operator << (ostream &out, SinhVien a){
    out << a.id << " " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
    return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}