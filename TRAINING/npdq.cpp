#include<bits/stdc++.h>
using namespace std;
int a[100],n;
void NPDQ(int m){
    if(m>n){
        for(int i=1;i<=n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for(int i=0;i<=1;i++){
        a[m]=i;
        NPDQ(m+1);
    }
}
void LKNPDQ(int a[],int n){
    NPDQ(1);
}
int main(){
    cin>>n;
    LKNPDQ(a,n);
    return 0;
}