#include<bits/stdc++.h>
using namespace std;
int n,m,a[100][100],a1[100];
void Prefixsum(int *a,int n){
    cin>>n;
    int prefix[n+1]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+a[i];//Sẽ tính từ 1 đến n luôn
    }
    int q;cin>>q;//So truy van
    while(q--){
        int l,r;cin>>l>>r;
        cout << prefix[r]-prefix[l-1] << endl;
    }
}
//Áp dụng với mảng 2 chiều
//Giả sử yêu cầu tính tổng của 1 hình chữ nhật được giới hạn bởi cột và hàng nào đó
void PrefixsumMatrix(int a[][100],int n,int m){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    } 
    int prefix[n+1][m+1]={0};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
        }
    }
    int q;cin>>q;
    while(q--){
        int h1,h2,c1,c2;
        cin>>h1>>h2>>c1>>c2;
        cout << prefix[h2][c2]-prefix[h1-1][c2]-prefix[h2][c1-1]+prefix[h1-1][c1-1] << endl;
    }
}
int main(){
    PrefixsumMatrix(a,n,m);
    return 0;
}