#include<bits/stdc++.h>
using namespace std;
pair<int,int> pa[8]={{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};
int n,m,a[100][100],cnt=0;
void floodfill(int i,int j,int x){
    ++cnt;
    a[i][j]=1000;
    for(int k=0;k<8;k++){
        int i1=i+pa[k].first;
        int j1=j+pa[k].second;
        if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]==x){
            floodfill(i1,j1,x);
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
    map<int,vector<int>> mp;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]!=1000){
                int tmp=a[i][j];
                cnt=0;
                floodfill(i,j,tmp);
                mp[tmp].push_back(cnt);
            }
        }
    }
    for(auto it : mp){
        sort(it.second.begin(),it.second.end());
        cout << it.first << " : ";
        for(auto x : it.second){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}