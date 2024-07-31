#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return n>1;
}
int main(){
    int n;cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    set<int> se;
    for(int i=0;i<n;i++){
        if(prime(a[i][i])){
            se.insert(a[i][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1 && prime(a[i][j])){
                se.insert(a[i][j]);
            }
        }
    }
    cout << se.size() << endl;
    return 0;
}