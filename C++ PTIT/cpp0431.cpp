#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int a[100001];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long int cnt=0;
        for(int i=0;i<n;i++){
            int x=upper_bound(a+i+1,a+n,a[i]+k)-a;
            cnt=cnt+x-i-1;
            for(int j=x-1;j>i;j--){
                if(a[i]+k==a[j]){
                    --cnt;
                }
                else break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}