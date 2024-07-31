#include<bits/stdc++.h>
using namespace std;
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
        float gpa;
        SinhVien(){
            id=name=lop=ns="";
            gpa=0;
        }
        friend istream& operator >> (istream& in,SinhVien& a){
            a.id="B20DCCN001";
            getline(in,a.name);
            in>>a.lop>>a.ns>>a.gpa;
            a.name=NameRemake(a.name);
            if(a.ns[1]=='/') a.ns="0"+a.ns;
            if(a.ns[4]=='/') a.ns.insert(3,"0");
            return in;
        }
        friend ostream& operator << (ostream& out,SinhVien a){
            out << a.id << " " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
            return out;
        }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}