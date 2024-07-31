#include<bits/stdc++.h>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;
map<string,KhachHang> mpkh;
map<string,MatHang> mpmh;
int cnt1=0;
class KhachHang{
    friend class HoaDon;
    public:
        string mkh,tkh,gt,ns,dc;
        int id;
        KhachHang(){
            mkh=tkh=gt=ns=dc="";
            id=0;
        }
        friend istream& operator >> (istream& in, KhachHang& a){
            cnt1++;
            if(cnt1==1) in.ignore();
            a.id=cnt1;
            a.mkh="KH"+string(3-to_string(a.id).size(),'0')+to_string(a.id);
            getline(in,a.tkh);
            getline(in,a.gt);
            getline(in,a.ns);
            getline(in,a.dc);
            mpkh[a.mkh]=a;
            return in;
        }
};
int cnt2=0;
class MatHang{
    friend class HoaDon;
    public:
        string mmh,tmh,dvt;
        int id,gm,gb;
        MatHang(){
            mmh=tmh=dvt="";
            id=gm=gb=0;
        }
        friend istream& operator >> (istream& in, MatHang& a){
            in.ignore();
            cnt2++;
            a.id=cnt2;
            a.mmh="MH"+string(3-to_string(a.id).size(),'0')+to_string(a.id);
            getline(in,a.tmh);
            getline(in,a.dvt);
            in>>a.gm>>a.gb;
            mpmh[a.mmh]=a;
            return in;
        }
};
int cnt3=0;
class HoaDon{
    public:
        string mhd,mkh,mmh;
        int soluong,id;
        long long cost;
        HoaDon(){
            mhd=mkh=mmh="";
            soluong=cost=id=0;
        }
        friend istream& operator >> (istream& in, HoaDon& a){
            cnt3++;
            a.id=cnt3;
            a.mhd="HD"+string(3-to_string(a.id).size(),'0')+to_string(a.id);
            in>>a.mkh>>a.mmh>>a.soluong;
            a.cost=a.soluong*mpmh[a.mmh].gb;
            return in;
        }
        friend ostream& operator << (ostream& out, HoaDon a){
            out << a.mhd << " " << mpkh[a.mkh].tkh << " " << mpkh[a.mkh].dc << " ";
            out << mpmh[a.mmh].tmh << " " << mpmh[a.mmh].dvt << " ";
            out << mpmh[a.mmh].gm << " " << mpmh[a.mmh].gb << " ";
            out << a.soluong << " " << (long long)a.cost << endl;
            return out;
        }
};
int main(){
    KhachHang dskh[25];
    int d1=0;
    MatHang dsmh[45];
    int d2=0;
    HoaDon dshd[105];
    int d3=0;
    ifstream fi1,fi2,fi3;
    fi1.open("KH.in",ios_base::in);
    fi2.open("MH.in",ios_base::in);
    fi3.open("HD.in",ios_base::in);
    string s;
    vector<string> v;
    while(getline(fi1,s)){
        if(s!="\n" && s!=" ") v.push_back(s);
    }
    while(getline(fi2,s)){
        if(s!="\n" && s!=" ") v.push_back(s);
    }
    while(getline(fi3,s)){
        if(s!="\n" && s!=" ") v.push_back(s);
    }
    int n=stoi(v[0]);
    int i=0;
    while(i<n*4+1){
        cnt1++;
        KhachHang x;
        x.id=cnt1;
        x.mkh="KH"+string(3-to_string(x.id).size(),'0')+to_string(x.id);
        x.tkh=v[++i];
        x.gt=v[++i];
        x.ns=v[++i];
        x.dc=v[++i];
        mpkh[x.mkh]=x;
        dskh[d1++]=x;
    }
    int m=stoi(v[n*4+1]);
    i=n*4+1;
    while(i<n*4+1){
        cnt2++;
        MatHang x;
        x.id=cnt2;
        x.mmh="MH"+string(3-to_string(x.id).size(),'0')+to_string(x.id);
        x.tmh=v[++i];
        x.dvt=v[++i];
        x.gm=stoi(v[++i]);
        x.gb=stoi(v[++i]);
        mpmh[x.mmh]=x;
        dsmh[d2++]=x;
    }
    int k=stoi(v[n*4+m*4+2]);
    i=n*4+m*4+2;
    while(i<n*4+m*4+k+2){
        HoaDon x;
        cnt3++;
        x.id=cnt3;
        x.mhd="MH"+string(3-to_string(x.id).size(),'0')+to_string(x.id);
        string tmp;
        tmp=v[++i];
        stringstream ss(tmp);
        string token;
        getline(ss,token,' ');
        x.mkh=tmp;
        getline(ss,token,' ');
        x.mmh=tmp;
        getline(ss,token,' ');
        x.soluong=stoi(tmp);
        dshd[d3++]=x;
    }
    for(int i=0;i<k;i++) cout << dshd[i];
    return 0;
}