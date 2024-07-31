#include<bits/stdc++.h>
using namespace std;
int a[101][101],n,m;
pair<int,int> pa[8]={{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};
void flootfill(int i,int j){
    a[i][j]=-1;
    for(int k=0;k<8;k++){
        int i1=i+pa[k].first;
        int j1=j+pa[k].second;
        if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]>=0){
            flootfill(i1,j1);
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==-1){
                cnt++;
                flootfill(i,j);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}