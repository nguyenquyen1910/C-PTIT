#include<bits/stdc++.h>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;
int cntkh=0;
map<string,KhachHang> mpkh;
map<string,MatHang> mpmh;
class KhachHang{
    friend class HoaDon;
    public:
        string mkh,tkh,gt,ns,dc;
        KhachHang(){
            mkh=tkh=gt=ns=dc="";
        }
        friend istream& operator >> (istream& in, KhachHang& a){
            cntkh++;
            if(cntkh==1) in.ignore();
            a.mkh="KH"+string(3-to_string(cntkh).size(),'0')+to_string(cntkh);
            getline(in,a.tkh);
            getline(in,a.gt);
            getline(in,a.ns);
            getline(in,a.dc);
            mpkh[a.mkh]=a;
            return in;
        }
};
int cntmh=0;
class MatHang{
    friend class HoaDon;
    public:
        string mmh,tmh,dvt;
        int gm,gb;
        MatHang(){
            mmh=tmh=dvt="";
            gm=gb=0;
        }
        friend istream& operator >> (istream& in, MatHang& a){
            in.ignore();
            cntmh++;
            a.mmh="MH"+string(3-to_string(cntmh).size(),'0')+to_string(cntmh);
            getline(in,a.tmh);
            getline(in,a.dvt);
            in>>a.gm>>a.gb;
            mpmh[a.mmh]=a;
            return in;
        }
};
int cnthd=0;
class HoaDon{
    public:
        string mhd,mkh,mmh;
        int soluong,loinhuan;
        HoaDon(){
            mhd=mkh=mmh="";
            soluong=loinhuan=0;
        }
        friend istream& operator >> (istream& in, HoaDon& a){
            cnthd++;
            a.mhd="HD"+string(3-to_string(cnthd).size(),'0')+to_string(cnthd);
            in>>a.mkh>>a.mmh>>a.soluong;
            string idkh=a.mkh;
            string idmh=a.mmh;
            a.loinhuan=a.soluong*(mpmh[idmh].gb-mpmh[idmh].gm);
            return in;
        }
        friend ostream& operator << (ostream& out, HoaDon a){
            string idkh=a.mkh;
            string idmh=a.mmh;
            out << a.mhd << " " << mpkh[idkh].tkh << " " << mpkh[idkh].dc << " ";
            out << mpmh[idmh].tmh << " " << mpmh[idmh].dvt << " " << mpmh[idmh].gm << " " << mpmh[idmh].gb << " " << a.soluong << " ";
            out << (long long)mpmh[idmh].gb*a.soluong << endl;
            return out;
        }   
};
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}