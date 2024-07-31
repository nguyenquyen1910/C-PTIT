#include<bits/stdc++.h>
using namespace std;
struct MatHang{
    int id;
    string name,cl;
    float buy,sell;
};
bool cmp(MatHang &a,MatHang &b){
    return (a.sell-a.buy)>(b.sell-b.buy);
}
void nhap(MatHang *a,int n){
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,a[i].name);
        getline(cin,a[i].cl);
        cin>>a[i].buy>>a[i].sell;
        a[i].id=i+1;
    }
}
void sapxep(MatHang *a,int n){
    sort(a,a+n,cmp);
}
void in(MatHang *a,int n){
    for(int i=0;i<n;i++){
        cout << a[i].id << " " << a[i].name << " " << a[i].cl << " ";
        cout << fixed << setprecision(2) << (float)(a[i].sell-a[i].buy) << endl;
    }
}
int main(){
    MatHang a[50];
    int n;cin>>n;
    nhap(a,n);
    sapxep(a,n);
    in(a,n);
    return 0;
}