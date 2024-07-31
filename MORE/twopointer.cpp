#include<bits/stdc++.h>
using namespace std;
#define ll long long
//Merging array
void problem1(){
    int n,m;cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<m;j++) cin>>b[j];
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            cout << a[i] << " ";
            ++i;
        }
        else cout << b[j] << " ";
        ++j;
    }
    while(i<n){ 
        cout << a[i] << " ";
        ++i;
    }
    while(j<m){
        cout << b[j] << " ";
        ++j;
    }
}
//Với mỗi phần tử của mảng thứ 2,in ra số phần tử trong mảng thứ nhất nhỏ hơn nó
void problem2(){
    int n,m;cin>>n>>m;
    int a[n],b[m];
    for(int &x : a) cin>>x;
    for(int &x : b) cin>>x;
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            ++i;
        }
        else{
            cout << i << " ";
            ++j;
        }
    }
    while(j<m){
        cout << n << " ";
        ++j;
    }
}
//Tìm số cặp (i,j) sao cho a[i]=b[j]
void problem3(){
    int n,m;cin>>n>>m;
    int a[n],b[m];
    for(int &x : a) cin>>x;
    for(int &x : b) cin>>x;
    int i=0,j=0;
    ll ans=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            ++i;
            continue;
        }
        else if(a[i]>b[j]){
            ++j;
            continue;
        }
        int cnt1=0,cnt2=0;
        while(i<n && a[i]==b[j]){
            ++cnt1;
            ++i;
        }
        int tmp=a[i-1];
        while(j<m && tmp==b[j]){
            ++cnt2;
            ++j;
        }
        ans+=1ll*cnt1*cnt2;
    }
    cout << ans << endl;
}
//Tìm dãy con dài nhất có tổng nhỏ hơn hoặc bằng s cho trước
void problem4(){
    int n;cin>>n;
    ll s;cin>>s;
    int a[n];
    for(int &x : a) cin>>x;
    ll sum=0;
    int l=0,r,ans=0;
    for(r=0;r<n;r++){
        sum+=a[r];
        while(sum>s){
            sum-=a[l];
            ++l;
        }
        ans=max(ans,r-l+1);
    }
    cout << ans << endl;
}
//Tìm dãy con ngắn nhất cả tổng lớn hơn hoặc bằng s cho trước
void problem5(){
    int n;cin>>n;
    ll s;cin>>s;
    int a[n];
    for(int &x : a) cin>>x;
    ll sum=0;
    int l=0,r,ans=INT_MAX;
    for(r=0;r<n;r++){
        sum+=a[r];
        while(sum>=s){
            ans=min(ans,r-l+1);
            sum-=a[l];
            ++l;
        }
    }
    if(ans==INT_MAX) cout << "-1\n";
    else cout << ans << endl;
}
//Tìm số lượng dãy con sao cho tổng nhỏ hơn bằng s
void problem6(){
    int n;cin>>n;
    ll s;cin>>s;
    int a[n];
    for(int &x : a) cin>>x;
    ll sum=0;
    int l=0,r;
    ll ans=0;
    for(r=0;r<n;r++){
        sum+=a[r];
        while(sum>s){
            sum-=a[l];
            ++l;
        }
        ans+=r-l+1;
    }
    cout << ans << endl;
}
//Tìm vị trí tổng của 2 số bằng 1 số x cho trước(Two Sum)
void problem7(){
    int n,x;cin>>n>>x;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(v.begin(),v.end());
    int l=0,r=n-1;
    while(l<r){
        int sum=v[l].first+v[r].first;
        if(sum==x){
            cout << v[l].second+1 << " " << v[r].second+1 << endl;
            break;
        }
        else if(sum<x){
            ++l;
        }
        else --r;
    }
    cout << "IMPOSSIBLE\n";
}
int main(){
    
    return 0;
}