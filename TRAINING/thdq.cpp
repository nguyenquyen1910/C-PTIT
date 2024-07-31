#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
void THDQ(int m){
    if(m>k){
        for(int i=1;i<=k;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for(int i=a[m-1]+1;i<=n-k+m;i++){
        a[m]=i;
        THDQ(m+1);
    }
}
void LKTHDQ(int a[],int n,int k){
    THDQ(1);
}
int main(){
    cin>>n>>k;
    LKTHDQ(a,n,k);
    return 0;
}