#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string id,name,lop,ns;
        double gpa;
    public:
        SinhVien(){
            id=name=lop=ns="";
            gpa=0;
        }
        friend istream& operator >> (istream& ,SinhVien&);
        friend ostream& operator << (ostream& ,SinhVien);
};
int cnt=0;
istream& operator >> (istream& in ,SinhVien& a){
    cnt++;
    a.id="B20DCCN"+string(3-to_string(cnt).length(),'0')+to_string(cnt);
    cin.ignore();
    getline(in,a.name);
    getline(in,a.lop);
    getline(in,a.ns);
    in>>a.gpa;
    if(a.ns[1]=='/'){
        a.ns="0"+a.ns;
    }
    if(a.ns[4]=='/'){
        a.ns.insert(3,"0");
    }
    return in;
}
ostream& operator << (ostream& out,SinhVien a){
    out << a.id << " " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}