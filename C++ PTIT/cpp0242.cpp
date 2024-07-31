#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],b[n];
        for(int &x : a) cin>>x;
        for(int &x : b) cin>>x;
        int MAX=0;
        for(int i=0;i<n;i++){
            int sum1=0,sum2=0;
            for(int j=i;j<n;j++){
                sum1+=a[j];
                sum2+=b[j];
                if(sum1==sum2){
                    MAX=max(MAX,j-i+1);
                }
            }
        }
        cout << MAX << endl;
    }
    return 0;
}