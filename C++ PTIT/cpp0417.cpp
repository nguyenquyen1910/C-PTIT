#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int i=0;
        while(v[i]<=v[i+1]) ++i;
        int j=n-1;
        while(v[j]>=v[j-1]) --j;
        int MAX=INT_MIN,MIN=INT_MAX;
        for(int l=i;l<=j;l++){
            MAX=max(MAX,v[l]);
            MIN=min(MIN,v[l]);
        }
        int a=i;
        for(int l=i;l>=0;l--){
            if(v[l]>MIN){
                a=l;
            }
        }
        int b=j;
        for(int l=j;l<n;l++){
            if(v[l]<MAX){
                b=l;
            }
        }
        cout << a+1 << " " << b+1 << endl;
    }
    return 0;
}