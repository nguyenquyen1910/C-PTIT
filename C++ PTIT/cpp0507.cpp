#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct PhanSo{
    ll t,m;
};
void nhap(PhanSo &a){
    cin>>a.t>>a.m;
}
PhanSo tong(PhanSo& a, PhanSo& b) {
    ll ga=__gcd(a.t,a.m);
    a.t/=ga;a.m/=ga;
    ll gb=__gcd(b.t,b.m);
    b.t/=gb;b.m/=gb;
    ll g=__gcd(a.m,b.m);
    ll chung=(a.m*b.m)/g;
    PhanSo t;
    t.t=a.t*(chung/a.m)+b.t*(chung/b.m);
    t.m=chung;
    ll gt=__gcd(t.t,t.m);
    t.t/=gt;t.m/=gt;
    return (PhanSo)t;
}
void in(PhanSo x){
    cout << x.t << "/" << x.m;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}