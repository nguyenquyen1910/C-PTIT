#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int k=0;
        for(int i=0;i<n;i++){
            if(i%2==0) b[i]=a[k++];  
        }
        for(int i=0;i<n;i++){
            if(i%2!=0) b[i]=a[k++]; 
        }
        for(int i=0;i<n;i++) cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}