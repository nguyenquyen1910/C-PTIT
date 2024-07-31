#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
    string name,date;
    float x1,x2,x3;
};
void nhap(ThiSinh &a){
    getline(cin,a.name);
    cin>>a.date;
    cin>>a.x1>>a.x2>>a.x3;
}
void in(ThiSinh a){
    cout << a.name << " " << a.date << " ";
    cout << fixed << setprecision(1) << float(a.x1+a.x2+a.x3); 
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}