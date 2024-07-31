#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct SinhVien{
    int stt;
    string id,name,lop;
    double d1,d2,d3;
};
int z=0;
void nhap(SinhVien &a){
    cin>>a.id;
    cin.ignore();
    getline(cin,a.name);
    cin>>a.lop;
    cin>>a.d1>>a.d2>>a.d3;
}
bool cmp(SinhVien a, SinhVien b){
    return a.id<b.id;
}
void sap_xep(SinhVien *a,int n){
    sort(a,a+n,cmp);
}
void in_ds(SinhVien *a,int n){
    for(int i=0;i<n;i++){
        cout << i+1 << " " << a[i].id << " " << a[i].name << " " << a[i].lop << " ";
        cout << fixed << setprecision(1) << a[i].d1 << " " << a[i].d2 << " " << a[i].d3 << endl;
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}