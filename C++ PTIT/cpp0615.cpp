#include<bits/stdc++.h>
using namespace std;
class NhanVien{
    private:
        string id,name,gt,dc,mst,day;
    public:
        string ns;
        int ngay,thang,nam;
        NhanVien(){
            id=name=gt=ns=dc=mst=day="";
        }
        friend istream& operator >> (istream& in,NhanVien&);
        friend ostream& operator << (ostream& out,NhanVien);
};
int cnt=0;
istream& operator >> (istream& in,NhanVien& a){
    if(cnt==0) in.ignore();
    cnt++;
    a.id=string(5-to_string(cnt).size(),'0')+to_string(cnt);
    getline(in,a.name);
    getline(in,a.gt);
    getline(in,a.ns);
    a.thang=(a.ns[0]-'0')*10+(a.ns[1]-'0');
    a.ngay=(a.ns[3]-'0')*10+(a.ns[4]-'0');
    a.nam=(a.ns[6]-'0')*1000+(a.ns[7]-'0')*100+(a.ns[8]-'0')*10+(a.ns[9]-'0');
    getline(in,a.dc);
    getline(in,a.mst);
    getline(in,a.day);
    return in;
}
bool cmp(NhanVien A, NhanVien B) {
    if (A.nam < B.nam)return true;
    if (A.nam == B.nam && A.thang < B.thang)return true;
    if (A.nam == B.nam && A.thang == B.thang && A.ngay < B.ngay)return true;
    return false;
}
void sapxep(NhanVien *a,int n){
    sort(a,a+n,cmp);
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
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}