#include<bits/stdc++.h>
using namespace std;
struct SapXep{
    int x,y;
};
bool cmp(SapXep a,SapXep b){
    if(a.y!=b.y){
        return a.y>b.y;
    }
    return a.x<b.x;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        SapXep a[n];
        for(int i=0;i<n;i++){
            cin>>a[i].x;a[i].y=0;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i].x==a[j].x){
                    a[i].y++;
                }
            }
        }
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++){
            cout << a[i].x << " ";
        }
        cout << endl;
    }
    return 0;
}