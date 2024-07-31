#include<bits/stdc++.h>
using namespace std;
class ThuNhap{
    public:
        string id,name;
        int heso;
        long long luong,phucap;
        ThuNhap(){
            id=name="";
            luong=heso=phucap=0;
        }
        friend istream& operator >> (istream& in, ThuNhap& a){
            in>>a.id;
            in.ignore();
            getline(in,a.name);
            in>>a.luong;
            if(a.id.find("HT")!=string::npos){
                a.phucap=2000000;
            }
            else if(a.id.find("HP")!=string::npos){
                a.phucap=900000;
            }
            else a.phucap=500000;
            a.heso=(a.id[2]-'0')*10+a.id[3]-'0';
            return in;
        }
        friend ostream& operator << (ostream& out, ThuNhap a){
            out << a.id << " " << a.name << " " << a.heso << " " << a.phucap << " " << (long long)a.luong*a.heso+a.phucap;
            return out;
        }
};
int main(){
    ThuNhap a;cin>>a;
    cout << a;
    return 0;
}