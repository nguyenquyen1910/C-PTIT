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
bool cmp(SinhVien a,SinhVien b){
    return a.id<b.id;
}
int main(){
    vector<SinhVien> v;
    SinhVien tmp;
    while(cin>>tmp){
        v.push_back(tmp);
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
}