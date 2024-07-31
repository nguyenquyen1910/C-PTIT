#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
class ThuPhi{
    public:
        string bks,type,tt,date;
        int ghe,phi,tongphi;
        ThuPhi(){
            bks=type=tt=date="";
            ghe=phi=tongphi=0;
        }
        friend istream& operator >> (istream& in, ThuPhi& a){
            in>>a.bks>>a.type>>a.ghe>>a.tt>>a.date;
            if(a.tt=="IN"){
                if(a.type=="Xe_con"){
                    if(a.ghe==5) a.phi=10000;
                    else a.phi=15000;
                }
                else if(a.type=="Xe_tai") a.phi=20000;
                else{
                    if(a.ghe==29) a.phi=50000;
                    else a.phi=70000;
                }
                mp[a.date]+=a.phi;
            }
            return in;
        }
};
int main(){
    ThuPhi a[1001];
    int n;cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(auto x : mp){
        cout << x.first << ": " << x.second << endl;
    }
    return 0;
}