#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[100][100];
        int tmp=1;
        for(int i=1;i<=4*n;i++){
            for(int j=1;j<=4*n;j++){
                a[i][j]=tmp++;
            }
        }
        int x=4*n;
        int gt=0;
        int M1[1000];
        for(int j=1;j<=x;j+=2){
            for(int i=j;i<=x;i++){
                M1[gt++]=a[i][j];
            }
            for(int i=j+1;i<x;i++){
                M1[gt++]=a[x][i];
            }
        }
        for(int i=0;i<n;i++){
            cout << M1[i] << " ";
        }
    }
    return 0;
}