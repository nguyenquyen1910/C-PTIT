#include<bits/stdc++.h>
using namespace std;
struct Years{
    string name,ns;
    int ngay,thang,nam;
};
void nhap(Years &a){
    cin>>a.name>>a.ns;
    a.ngay=(a.ns[0]-'0')*10+(a.ns[1]-'0');
    a.thang=(a.ns[3]-'0')*10+(a.ns[4]-'0');
    a.nam=(a.ns[6]-'0')*1000+(a.ns[7]-'0')*100+(a.ns[8]-'0')*10+(a.ns[9]-'0');
}
bool cmp(Years a,Years b){
    if(a.nam!=b.nam) return a.nam>b.nam;
    else if (a.thang!=b.thang)return a.thang>b.thang;
    else  return a.ngay>b.ngay;
}
int main(){
    int n;cin>>n;
    Years a[n];
    for(int i=0;i<n;i++){
        nhap(a[i]);
    }
    sort(a,a+n,cmp);
    cout << a[0].name << endl << a[n-1].name << endl;
    return 0;
}