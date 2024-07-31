#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            v.push_back(a[j][i]);
        }
        sort(v.begin(),v.end());
        int j=0;
        for(auto x : v){
            a[j][i]=x;
            ++j;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}