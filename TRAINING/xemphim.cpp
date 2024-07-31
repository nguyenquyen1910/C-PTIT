#include<bits/stdc++.h>
using namespace std;
class TheLoai;
class XemPhim;
map<string,TheLoai> mptl;
map<string,XemPhim> mpxp;
int cnt1=0;
class TheLoai{
    friend class XemPhim;
    public:
        string theloai,matl;
        TheLoai(){
            theloai="";
        }
        friend istream& operator >> (istream& in, TheLoai& a){
            cnt1++;
            if(cnt1==1) in.ignore();
            a.matl="TL"+string(3-to_string(cnt1).size(),'0')+to_string(cnt1);
            getline(in,a.theloai);
            mptl[a.matl]=a;
            return in;
        }
};
int cnt2=0;
class XemPhim{
    public:
        string idphim,matl,day,name;
        int tap,ngay,thang,nam;
        XemPhim(){
            matl=day=name="";
            tap=0;
        }
        friend istream& operator >> (istream& in, XemPhim& a){
            cnt2++;
            a.idphim="P"+string(3-to_string(cnt2).size(),'0')+to_string(cnt2);
            in>>a.matl>>a.day;
            in.ignore();
            getline(in,a.name);
            in>>a.tap;
            mpxp[a.idphim]=a;
            a.ngay=(a.day[0]-'0')*10+a.day[1]-'0';
            a.thang=(a.day[3]-'0')*10+a.day[4]-'0';
            a.nam=(a.day[6]-'0')*1000+(a.day[7]-'0')*100+(a.day[8]-'0')*10+a.day[9]-'0';
            return in;
        }
        friend ostream& operator << (ostream& out, XemPhim a){
            out << a.idphim << " ";
            string idtl=a.matl;
            out << mptl[idtl].theloai << " ";
            out << a.day << " " << a.name << " " << a.tap << endl;
            return out;
        }
};
bool cmp(XemPhim a,XemPhim b){
    if(a.day!=b.day){
        if(a.nam!=b.nam){
            return a.nam<b.nam;
        }
        else if(a.nam==b.nam && a.thang!=b.thang){
            return a.thang<b.thang;
        }
        else if(a.nam==b.nam && a.thang==b.thang && a.ngay!=b.ngay){
            return a.ngay<b.ngay;
        }
    }
    return a.tap>b.tap;
}
void sapxep(XemPhim *a,int n){
    sort(a,a+n,cmp);
}
int main(){
    TheLoai tl[100];
    XemPhim xp[100];
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>tl[i];
    }
    for(int i=0;i<m;i++){
        cin>>xp[i];
    }
    sapxep(xp,m);
    for(int i=0;i<m;i++){
        cout << xp[i];
    }
    return 0;
}