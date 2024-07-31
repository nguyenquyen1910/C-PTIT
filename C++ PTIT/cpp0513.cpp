#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string id,name,cl,ns;
    float gpa;
};
void chuanhoa(SinhVien &a){
    if(a.ns[1]=='/'){
        a.ns="0"+a.ns;
    }
    if(a.ns[4]=='/'){
        a.ns.insert(3,"0");
    }
}
void nhap(SinhVien *a,int n){
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].cl>>a[i].ns;
        cin>>a[i].gpa;
        chuanhoa(a[i]);
    }
}
void in(SinhVien *a,int n){
    for(int i=0;i<n;i++){
        string s;
        if(i<9) s="B20DCCN00";
        else s="B20DCCN0";
        cout << s << i+1 << " " << a[i].name << " " << a[i].cl << " " << a[i].ns << " ";
        cout << fixed << setprecision(2) << a[i].gpa << endl; 
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}