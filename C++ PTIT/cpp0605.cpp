#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}
class PhanSo{
    public:
        long long tu,mau;
        PhanSo(long long tu, long long mau);
        friend istream& operator >> (istream&, PhanSo&);
        friend ostream& operator << (ostream&, PhanSo);
        void rutgon();
};
PhanSo::PhanSo(long long tu, long long mau){
    this->tu=tu;
    this->mau=mau;
}
istream& operator >> (istream& in, PhanSo& a){
    in>>a.tu>>a.mau;
    return in;
}
ostream& operator << (ostream& out, PhanSo a){
    out << a.tu << "/" << a.mau;
    return out;
}
void PhanSo::rutgon(){
    long long mc=gcd(tu,mau);
    tu/=mc;
    mau/=mc;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}