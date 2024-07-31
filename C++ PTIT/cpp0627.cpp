#include<bits/stdc++.h>
using namespace std;
class GiangVien{
    public:
        string id,name,sub,nganh;
        GiangVien(){
            id=name=sub=nganh="";
        }
        friend istream& operator >> (istream&,GiangVien&);
        friend ostream& operator << (ostream&,GiangVien);
        friend bool tim_kiem(GiangVien,string);
};
int cnt=0;
istream& operator >> (istream &in,GiangVien &a){
    cnt++;
    a.id="GV"+string(2-to_string(cnt).size(),'0')+to_string(cnt);
    getline(in,a.name);
    getline(in,a.sub);
    stringstream ss(a.sub);
    string tmp;
    while(ss >> tmp){
        a.nganh+=toupper(tmp[0]);
    }
    return in;
}
bool tim_kiem(GiangVien a,string s){
    for(char &x : a.name) x=tolower(x);
    for(char &x : s) x=tolower(x);
    return a.name.find(s)!=string::npos;
}
ostream& operator << (ostream& out,GiangVien a){
    out << a.id << " " << a.name << " " << a.nganh << endl;
    return out;
}
int main(){
    int n;cin>>n;
    GiangVien a[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;cin>>q;
    while(q--){
        string s;cin>>s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        for(int i=0;i<n;i++){
            if(tim_kiem(a[i],s)){
                cout << a[i];
            }
        }
        cout << endl;
    }
    return 0;
}