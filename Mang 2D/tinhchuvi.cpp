#include<bits/stdc++.h>
using namespace std;
int n,m,a[105][105],cnt,b[105][105];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
void loang(int i,int j){
    a[i][j]=0;
    int dem=0;
    for(int k=0;k<4;k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=1 && i1<=n && j1>=1 && j1<=m && b[i1][j1]==1){
            dem++;
        }
    }
    cnt+=4-dem;//Tinh xem co bao nhieu canh dong gop
    for(int k=0;k<4;k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
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