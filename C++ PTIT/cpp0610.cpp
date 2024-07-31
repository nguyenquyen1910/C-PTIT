#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}
class PhanSo{
    private: 
        ll tu,mau;
    public:
        PhanSo(ll tu,ll mau);
        void rutgon();
        friend istream& operator >> (istream&,PhanSo&);
        friend ostream& operator << (ostream&,PhanSo);
        friend PhanSo operator + (PhanSo&,PhanSo&);
};
PhanSo::PhanSo(ll tu,ll mau){
    this->tu=tu;
    this->mau=mau;
}
istream& operator >> (istream& in,PhanSo& a){
    cin>>a.tu>>a.mau;
    return in;
}
ostream& operator << (ostream& out,PhanSo a){
    cout << a.tu << "/" << a.mau;
    return out;
}
PhanSo operator + (PhanSo& a,PhanSo& b){
    PhanSo tong(1,1);
    ll mc=lcm(a.mau,b.mau);
    tong.mau=mc;
    tong.tu=a.tu*(mc/a.mau)+b.tu*(mc/b.mau);
    ll m=gcd(tong.tu,tong.mau);
    tong.tu/=m;
    tong.mau/=m;
    return tong;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}