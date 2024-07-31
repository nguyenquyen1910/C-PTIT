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
void chuanhoa(string &s){
    s[0]=toupper(s[0]);
    for(int i=1;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
}
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
    out << a.id << " ";
    stringstream ss(a.name);
    string tmp;
    while(ss >> tmp){
        chuanhoa(tmp);
        out << tmp << " ";
    }
    out << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
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