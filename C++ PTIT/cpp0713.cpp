#include<bits/stdc++.h>
using namespace std;
int n,a[100],b[100];
void HvDq(int m){
    if(m>n){
        for(int i=1;i<=n;i++){
            cout << a[i];
        }
        cout << " ";
    }
    for(int i=1;i<=n;i++){
        if(b[i]==0){
            a[m]=i;
            b[i]=1;
            HvDq(m+1);
            b[i]=0;
        }
    }
}
void LkHvDq(int a[],int n){
    for(int i=1;i<=n;i++){
        b[i]=0;
    }
    HvDq(1);
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        LkHvDq(a,n);
        cout << endl;
    }
    return 0;
}