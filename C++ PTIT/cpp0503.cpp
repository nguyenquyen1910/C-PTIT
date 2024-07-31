#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a,ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
struct PhanSo{
    ll tu,mau;
};
void nhap(PhanSo &a){
    cin>>a.tu>>a.mau;
}
void rutgon(PhanSo &a){
    ll chung=gcd(a.tu,a.mau);
    a.tu/=chung;
    a.mau/=chung;
}
void in(PhanSo a){
    cout << a.tu << "/" << a.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}