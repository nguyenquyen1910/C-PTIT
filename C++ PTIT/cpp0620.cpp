#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string name,email;
    public:
        string id,lop;
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
    if(a.lop==b.lop)
        return a.id<b.id;
    return a.lop<b.lop;
}
void sapxep(SinhVien *a,int n){
    sort(a,a+n,cmp);
}
int main(){
    int n;cin>>n;
    SinhVien a[1001];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sapxep(a,n);
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    return 0;
}