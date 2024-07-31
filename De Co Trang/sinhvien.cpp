#include<bits/stdc++.h>
using namespace std;
int cnt=0;
string NameRemake(string s){
    string res="";
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        res+=toupper(tmp[0]);
        for(int i=1;i<tmp.size();i++){
            res+=tolower(tmp[i]);
        }
        res+=" ";
    }
    res.pop_back();
    return res;
}
class SinhVien{
    public:
        string id,name,lop,ns;
        double gpa;
        SinhVien(){
            id=name=lop=ns="";
            gpa=0;
        }
        friend istream& operator >> (istream& in, SinhVien& a){
            cnt++;
            a.id="B20DCCN"+string(3-to_string(cnt).size(),'0')+to_string(cnt);
            in.ignore();
            getline(in,a.name);
            in>>a.lop>>a.ns>>a.gpa;
            if(a.ns[1]=='/') a.ns="0"+a.ns;
            if(a.ns[4]=='/') a.ns.insert(3,"0");
            a.name=NameRemake(a.name);
            return in;
        }
        friend ostream& operator << (ostream& out,SinhVien a){
            out << a.id << " " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
            return out;
        }
};
bool cmp(SinhVien a,SinhVien b){
    return a.gpa>b.gpa;
}
int main(){
    int n;cin>>n;
    SinhVien a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++) cout<<a[i];
    return 0;
}