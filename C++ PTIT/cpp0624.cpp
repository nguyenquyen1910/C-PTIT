#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string name,email;
    public:
        string id,lop;
        string nganh="";
        SinhVien(){
            id=name=lop=email="";
        }
        friend istream& operator >> (istream&,SinhVien&);
        friend ostream& operator << (ostream&,SinhVien);
};
istream& operator >> (istream& in,SinhVien& a){
    in>>a.id;
    in.ignore();
    getline(in,a.name);
    in>>a.lop>>a.email;
    for(int i=3;i<7;i++){
        a.nganh+=a.id[i];
    }
    return in;
}
ostream& operator << (ostream& out,SinhVien a){
    out << a.id << " " << a.name << " " << a.lop << " " << a.email << endl;
    return out;
}
int main(){
    int n;cin>>n;
    SinhVien a[1001];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;cin>>q;
    cin.ignore();
    while(q--){
        string s;getline(cin,s);
        string x;for(int i=0;i<s.size();i++) x.push_back(toupper(s[i]));
        cout << "DANH SACH SINH VIEN NGANH " << x << ":\n";
        for(int i=0;i<n;i++){
            if(a[i].id[5]==s[0]){
                if(s[0]=='K' || s[0]=='V' || s[0]=='D') cout << a[i];
                else if(a[i].lop[0]!='E') cout << a[i];
            }
        }   
    }
    return 0;
}