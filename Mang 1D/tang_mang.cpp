#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int res=0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            int hieu=a[i-1]-a[i]+1;
            res+=hieu;
            a[i]=a[i-1]+1;
        }
    }
    cout << res;
    return 0;
}