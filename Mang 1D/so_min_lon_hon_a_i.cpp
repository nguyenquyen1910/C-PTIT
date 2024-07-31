#include<bits/stdc++.h>
using namespace std;
int findpos(int *a,int n,int x){
    int l=0,r=n-1;
    int res=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]>x){
            res=m;
            r=m-1;
        }
        else l=m+1;
    }
    return res;
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            //Cach 1:
            int pos=findpos(a,n,b[i]);
            if(pos==-1){
                cout << "_ ";
            }
            else cout << a[pos] << " ";
            //Cach 2: 
            // auto it = lower_bound(a,a+n,b[i]);
            // if(it==a) cout << "_ ";
            // else cout << *(it) << " ";
        }
        cout << endl;
    }
    return 0;
}