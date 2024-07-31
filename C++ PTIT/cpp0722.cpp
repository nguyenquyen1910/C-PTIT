#include<bits/stdc++.h>
using namespace std;
long long gt(int n){
    long long res=1;
    for(int i=1;i<=n;i++){
        res*=i;
    }
    return res;
}
int main(){
    int n;cin>>n;
    int a[n+1];
    a[0]=a[1]=1;
    for(int i=2;i<=n;i++){
        a[i]=(gt(2*i))/(gt(i)*(gt(i+1)));
    }
    long long sum=0;
    for(int i=0;i<=n;i++){
        sum+=a[i]*a[n-i];
    }
    cout << sum;
    return 0;
}