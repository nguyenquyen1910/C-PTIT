#include<bits/stdc++.h>
using namespace std;
class KhachHang;
class MatHang;
class HoaDon;
map<string,KhachHang> mp1;
map<string,MatHang> mp2;
int cnt1=0;
class KhachHang{
    friend class HoaDon;
    public:
        string mkh,tkh,gt,ns,dc;
        KhachHang(){
            mkh=tkh=gt=ns=dc="";
        }
        friend istream& operator >> (istream& in, KhachHang& a){
            cnt1++;
            if(cnt1==1) in.ignore();
            a.mkh="KH"+string(3-to_string(cnt1).size(),'0')+to_string(cnt1);
            getline(in,a.tkh);
            getline(in,a.gt);
            getline(in,a.ns);
            getline(in,a.dc);
            mp1[a.mkh]=a;
            return in;
        }
};
int cnt2=0;
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
            cnt2++;
            a.mmh="MH"+string(3-to_string(cnt2).size(),'0')+to_string(cnt2);
            getline(in,a.tmh);
            getline(in,a.dvt);
            in>>a.gm>>a.gb;
            mp2[a.mmh]=a;
            return in;
        }
};
int cnt3=0;
class HoaDon{
    public:
        string mhd,mkh,mmh;
        int soluong;
        long long loinhuan,thanhtien;
        HoaDon(){
            mhd=mkh=mmh="";
            soluong=loinhuan=thanhtien=0;
        }
        friend istream& operator >> (istream& in, HoaDon& a){
            cnt3++;
            a.mhd="HD"+string(3-to_string(cnt3).size(),'0')+to_string(cnt3);
            in>>a.mkh>>a.mmh>>a.soluong;
            a.loinhuan=a.soluong*(mp2[a.mmh].gb-mp2[a.mmh].gm);
            a.thanhtien=a.soluong*mp2[a.mmh].gb;
            return in;
        }
        friend ostream& operator << (ostream& out, HoaDon a){
            out << a.mhd << " " << mp1[a.mkh].tkh << " " << mp1[a.mkh].dc << " " << mp2[a.mmh].tmh << " ";
            out << a.soluong << " " << a.thanhtien << " " << a.loinhuan << endl;
            return out;
        }
};
bool cmp(HoaDon a,HoaDon b){
    return a.loinhuan>=b.loinhuan;
}
void sapxep(HoaDon *a,int n){
    sort(a,a+n,cmp);
}
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

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}