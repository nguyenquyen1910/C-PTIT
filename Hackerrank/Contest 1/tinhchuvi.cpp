#include<bits/stdc++.h>
using namespace std;
int n,m,a[105][105],b[105][105],cnt=0;
pair<int,int> pa[4]={{-1,0},{0,1},{1,0},{0,-1}};
void loang(int i,int j){
    a[i][j]=0;
    int dem=0;
    for(int k=0;k<4;k++){
        int i1=i+pa[k].first;
        int j1=j+pa[k].second;
        if(i1>=1 && i1<=n && j1>=1 && j1<=m && b[i1][j1]==1){
            ++dem;
        }
    }
    cnt+=4-dem;
    for(int k=0;k<4;k++){
        int i1=i+pa[k].first;
        int j1=j+pa[k].second;
        if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]==1){
            loang(i1,j1);
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]){
                cnt=0;
                loang(i,j);
                cout << cnt << " ";
            }
        }
    }
    return 0;
}