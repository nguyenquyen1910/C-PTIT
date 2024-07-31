#include<bits/stdc++.h>
using namespace std;
int findpoint(int *a,int n,int sum){
    int sum1=0;
    for(int i=0;i<n;i++){
        sum1+=a[i];
        if(sum1==sum-sum1+a[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        cout << findpoint(a,n,sum) << endl;
    }
    return 0;
}