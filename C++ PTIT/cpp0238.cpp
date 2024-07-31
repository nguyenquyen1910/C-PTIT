#include<iostream>
using namespace std;
int n,m;
char a[100][100];
pair<int,int> path[4]={{-1,0},{0,1},{1,0},{0,-1}};
void loang(int i,int j){
    a[i][j]='*';
    for(int k=0;k<4;k++){
        int i1=i+path[k].first,j1=j+path[k].second;
        if(i1>=0 && i1<n && j1>=0 && j1<m && a[i1][j1]=='O'){
            loang(i1,j1);
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            if(a[i][1]=='O') loang(i,1);
            if(a[i][m]=='O') loang(i,m);
        }
        for(int i=1;i<=m;i++){
            if(a[1][i]=='O') loang(1,i);
            if(a[n][i]=='O') loang(n,i);
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i][j]!='*'){
                    cout << "X ";
                }
                else cout << "O ";
            }
            cout << endl;
        }
    }
    return 0;
}