#include<bits/stdc++.h>
using namespace std;
class NhanVien{
    private:
        string id,name,gt,ns,dc,mst,day;
    public:
        NhanVien(){
            id=name=gt=ns=dc=mst=day="";
        }
        friend istream& operator >> (istream&,NhanVien&);
        friend ostream& operator << (ostream&,NhanVien);
};
int cnt=0;
istream& operator >> (istream& in,NhanVien& a){
    cnt++;
    a.id=string(5-to_string(cnt).size(),'0')+to_string(cnt);
    cin.ignore();
    getline(in,a.name);
    in>>a.gt>>a.ns;
    cin.ignore();
    getline(in,a.dc);
    in>>a.mst>>a.day;
    return in;
}
ostream& operator << (ostream& out,NhanVien a){
    out << a.id << " " << a.name << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.day << endl; 
    return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}