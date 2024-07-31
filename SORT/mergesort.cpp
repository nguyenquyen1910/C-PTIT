#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<vector>
#include<set>
#include<map>
#include<climits>
using namespace std;
void merge(int a[],int l,int m,int r){
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i=0,j=0;
    while(i<x.size() && j<y.size()){
        if(x[i]<=y[j]){
            a[l]=x[i];
            ++l;++i;
        }
        else{
            a[l]=y[j];
            ++l;++j;
        }
    }
    while(i<x.size()){
        a[l]=x[i];
        ++l;++i;
    }
    while(j<y.size()){
        a[l]=y[j];
        ++l;++j;
    }
}
void mergesort(int a[],int l,int r){
    if(l>=r) return;
    int m=(l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
}
//Ứng dụng để tìm số cặp nghịch thế trong mảng(số sau lớn hơn số trước)
int merge_count(int a[],int l,int m,int r){
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i=0,j=0,cnt=0;
    while(i<x.size() && j<y.size()){
        if(x[i]<=y[j]){
            a[l]=x[i];
            ++l;++i;
        }
        else{
            cnt+=x.size()-i;
            a[l]=y[j];
            ++l;++j;
        }
    }
    while(i<x.size()){
        a[l]=x[i];
        ++l;++i;
    }
    while(j<y.size()){
        a[l]=y[j];
        ++l;++j;
    }
    return cnt;
}
int mergesort_count(int a[],int l,int r){
    int count=0;
    if(l<r){
        int m=(l+r)/2;
        count+=mergesort_count(a,l,m);
        count+=mergesort_count(a,l+1,r);
        count+=merge_count(a,l,m,r);
    }
    return count;
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){   
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout << a[i] <<  " ";
    }
    return 0;
}