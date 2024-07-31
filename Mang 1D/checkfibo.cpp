#include<bits/stdc++.h>
//Cho mảng A. Tìm tất cả các số fibo trong mảng và giữ nguyên vị trí
using namespace std;
long long F[100];
void ktao(){
    F[0]=0;
    F[1]=1;
    for(int i=2;i<=92;i++){
        F[i]=F[i-1]+F[i-2];
    }
}
bool check(long long n){
    for(int i=0;i<=92;i++){
        if(n==F[i]){
            return true;
            break;
        }
    }
    return false;
}
int main(){
    ktao();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];vector<int> v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(check(a[i])){
                v.push_back(a[i]);
            }
        }
        for(int i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}