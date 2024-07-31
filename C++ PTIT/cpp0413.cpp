#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int l=0,r=n-1;
        int cnt=0;
        while(l<=r){
            if(cnt%2==0){
                cout << a[r] << " ";
                --r;
            }
            else{
                cout << a[l] << " ";
                ++l;
            }
            ++cnt;
        }
        cout << endl;
    }
    return 0;
}