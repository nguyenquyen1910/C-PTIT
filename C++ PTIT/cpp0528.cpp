#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    int stt;
    string id,name,lop,mail,com;
};
bool cmp(SinhVien a,SinhVien b){
    if(a.name<b.name) return true;
    return false;
}
int main(){
    int n;cin>>n;
    SinhVien a[100];
    cin.ignore();
    for(int i=0;i<n;i++){
        a[i].stt=i+1;
        getline(cin,a[i].id);
        getline(cin,a[i].name);
        getline(cin,a[i].lop);
        getline(cin,a[i].mail);
        getline(cin,a[i].com);
    }
    sort(a,a+n,cmp);
    int q;cin>>q;
    while(q--){
        string s;cin>>s;
        for(int i=0;i<n;i++){
            if(s==a[i].com){
                cout << a[i].stt << " " << a[i].id << " " << a[i].name << " " << a[i].lop << " " << a[i].mail << " " << a[i].com << endl;
            }
        }
    }
    return 0;
}