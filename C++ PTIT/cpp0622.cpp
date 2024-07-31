#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string name,lop,email;
    public:
        string id;
        SinhVien(){
            id=name=lop=email="";
        }
        friend istream& operator >> (istream&,SinhVien&);
        friend ostream& operator << (ostream&,SinhVien);
        friend bool check(string,SinhVien);
};
istream& operator >> (istream& in,SinhVien& a){
    in>>a.id;
    in.ignore();
    getline(in,a.name);
    in>>a.lop>>a.email;
    return in;
}
ostream& operator << (ostream& out,SinhVien a){
    out << a.id << " " << a.name << " " << a.lop << " " << a.email << endl;
    return out;
}
bool check(string s,SinhVien a){
    return s==a.lop;
}
int main(){
    int n;cin>>n;
    SinhVien a[1001];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;cin>>q;
    while(q--){
        string s;cin>>s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
        for(int i=0;i<n;i++){
            if(check(s,a[i])){
                cout << a[i];
            }
        }
        cout << endl;
    }
    return 0;
}