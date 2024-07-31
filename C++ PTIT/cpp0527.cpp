#include<bits/stdc++.h>
using namespace std;
struct Time{
    int gio,phut,giay;
};
void nhap(Time &a){
    cin>>a.gio>>a.phut>>a.giay;
}
bool cmp(Time a,Time b){
    return (a.gio*3600+a.phut*60+a.giay)<(b.gio*3600+b.phut*60+b.giay);
}
int main(){
    int n;cin>>n;
    Time a[n];
    for(int i=0;i<n;i++){
        nhap(a[i]);
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << endl; 
    }
    return 0;
}