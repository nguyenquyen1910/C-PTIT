#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct NhanVien{
    string name,gt,ns,dc,ms,date;
};
int z=0;
void nhap(NhanVien &a){
    cin.ignore();
    getline(cin,a.name);
    cin>>a.gt>>a.ns;
    cin.ignore();
    getline(cin,a.dc);
    cin>>a.ms>>a.date;
}
void inds(NhanVien *a, int n){
    for(int i=0;i<n;i++){
        string s;
        if(i<9) s="0000";
        else s="000";
        cout << s << i+1 << " " << a[i].name << " " << a[i].gt << " " << a[i].ns << " ";
        cout << a[i].dc << " " << a[i].ms << " " << a[i].date << endl;
    }
} 
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

