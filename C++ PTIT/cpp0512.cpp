#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct PhanSo{
    ll tu,mau;
};
void process(PhanSo &a,PhanSo &b){
    ll ga=__gcd(a.tu,a.mau);
    a.tu/=ga;a.mau/=ga;
    ll gb=__gcd(b.tu,b.mau);
    b.tu/=gb;b.mau/=gb;
    ll bc=(a.mau*b.mau)/__gcd(a.mau,b.mau);
    PhanSo x;
    x.tu=a.tu*(bc/a.mau)+b.tu*(bc/b.mau);
    x.mau=bc;
    x.tu*=x.tu;
    x.mau*=x.mau;
    ll gx=__gcd(x.tu,x.mau);
    x.tu/=gx;x.mau/=gx;
    cout << x.tu << "/" << x.mau << " ";
    PhanSo y;
    y.tu=a.tu*b.tu*x.tu;
    y.mau=a.mau*b.mau*x.mau;
    ll gy=__gcd(y.tu,y.mau);
    y.tu/=gy;y.mau/=gy;
    cout << y.tu << "/" << y.mau << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}