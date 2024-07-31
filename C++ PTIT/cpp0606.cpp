#include<bits/stdc++.h>
using namespace std;
class NhanVien{
    private:
        string id,name,gt,ns,dc,mst,nt;
    public:
        NhanVien(){
            id=name=gt=ns=dc=mst=nt="";
        }
        friend istream& operator >> (istream&,NhanVien&);
        friend ostream& operator << (ostream&,NhanVien);
};
int cnt=0;
istream& operator >> (istream& in,NhanVien& a){
    cnt++;
    if(cnt==1){
        a.id="00001";
        getline(cin,a.name);
        cin>>a.gt>>a.ns;
        cin.ignore();
        getline(cin,a.dc);
        cin>>a.mst>>a.nt;
    }
    else{
        cout << a.id << " " << a.name << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nt << endl;
    }
    return in;
}
int main(){
    NhanVien a;
    cin >> a;
    cin >> a;
    return 0;
}