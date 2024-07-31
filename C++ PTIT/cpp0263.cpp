#include<iostream>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
int mai[402][402],sup[402][402]={0};
int main(){
    int n;cin>>n;
    int a[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1){
                mai[i][j]=a[i][j];
            }
            else{
                mai[i][j]=a[i][j]+mai[i-1][j-1];
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==n){
                sup[i][j]=a[i][j];
            }
            else{
                sup[i][j]=a[i][j]+sup[i-1][j+1];
            }
        }
    }
    ll ans=-1e18;
    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            int tmp=min(j,i);
            int row=i-tmp,col=j-tmp;
            for(int k=0;k<min(i,j);k++){
                ans=max(ans,0ll + mai[i][j]-mai[row+k][col+k]-(sup[i][col+k+1]-sup[row+k][j+1]));
            }
        }
    }
    cout << ans;
    return 0;
}