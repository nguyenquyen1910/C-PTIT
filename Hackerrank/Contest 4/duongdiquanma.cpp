#include<bits/stdc++.h>
using namespace std;
int n,a[105][105];
pair<int,int> pa[8]={{-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2}};
void loang(int i,int j){
    a[i][j]=0;
    for(int k=0;k<8;k++){
        int i1=i+pa[k].first;
        int j1=j+pa[k].second;
        if(i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1]){
            loang(i1,j1);
        }
    }
}
int main(){
    cin>>n;
    int s,t,u,v;cin>>s>>t>>u>>v;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    loang(s,t);
    if(a[u][v]==0) cout << "YES";
    else cout << "NO";
    return 0;
}