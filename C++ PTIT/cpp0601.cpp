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
        void nhap();
        void xuat();
};
void SinhVien::nhap(){
    this->id="B20DCCN001";
    getline(cin,this->name);
    cin>>this->lop>>this->ns>>this->gpa;
    if(this->ns[1]=='/'){
        this->ns="0"+this->ns;
    }
    if(this->ns[4]=='/'){
        this->ns.insert(3,"0");
    }
}
void SinhVien::xuat(){
    cout << this->id << " " << this->name << " " << this->lop << " " << this->ns << " " << fixed << setprecision(2) << this->gpa;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}