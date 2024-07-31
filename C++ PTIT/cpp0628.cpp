#include<bits/stdc++.h>
using namespace std;
class ThucTap{
    private:
        string ten;
    public:
        string ma;
        int sl;
        ThucTap(){
            ten=ma="";
            sl=0;
        }
        friend istream& operator >> (istream&,ThucTap&);
        friend ostream& operator << (ostream&,ThucTap);
};
istream& operator >> (istream& in,ThucTap& a){
    in>>a.ma;
    in.ignore();
    getline(in,a.ten);
    in>>a.sl;
    return in;
}
ostream& operator << (ostream& out,ThucTap a){
    out << a.ma << " " << a.ten << " " << a.sl << endl;
    return out;
} 
bool cmp(ThucTap a, ThucTap b){
    if(a.sl==b.sl)
        return a.ma<b.ma;
    return a.sl>b.sl;
}
void sapxep(ThucTap *a,int n){
    sort(a,a+n,cmp);
}
int main(){
    int n;cin>>n;
    ThucTap a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sapxep(a,n);
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    return 0;
}