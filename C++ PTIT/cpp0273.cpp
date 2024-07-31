#include<bits/stdc++.h>
using namespace std;
int canbang(int a[],int n,int sum){
    int s1=0;
    for(int i=0;i<n;i++){
        s1+=a[i];
        if(s1==sum-s1+a[i]){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        cout << canbang(a,n,sum) << endl;
    }
    return 0;
}