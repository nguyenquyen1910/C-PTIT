#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string name,lop,email;
    public:
        string id;
        int khoa;
        SinhVien(){
            id=name=lop=email="";
        }
        friend istream& operator >> (istream&,SinhVien&);
        friend ostream& operator << (ostream&,SinhVien);
        friend bool check(int,SinhVien);
};
istream& operator >> (istream& in,SinhVien& a){
    in>>a.id;
    in.ignore();
    getline(in,a.name);
    in>>a.lop>>a.email;
    a.khoa=(a.lop[1]-'0')*10+(a.lop[2]-'0');
    return in;
}
ostream& operator << (ostream& out,SinhVien a){
    out << a.id << " " << a.name << " " << a.lop << " " << a.email << endl;
    return out;
}
bool check(int namhoc,SinhVien a){
    return namhoc%100==a.khoa;
}
int main(){
    int n;cin>>n;
    SinhVien a[1001];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;cin>>q;
    while(q--){
        int namhoc;cin>>namhoc;
        cout << "DANH SACH SINH VIEN KHOA " << namhoc << ":\n";
        for(int i=0;i<n;i++){
            if(check(namhoc,a[i])){
                cout << a[i];
            }
        }
        cout << endl;
    }
    return 0;
}