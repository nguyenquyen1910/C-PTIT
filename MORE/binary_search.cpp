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
//Yêu cầu mảng phải sắp xếp tăng dần hoặc giảm dần
//Độ phức tạp O(log n)
//Sử dụng hàm có sẵn có tên binary_search
bool binarysearch(int a[],int n,int x){
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==x){
            return true;
        }
        else if(a[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return false;
}
//Ứng dụng để tìm số đầu tiên có giá trị x
int first_pos(int a[],int n,int x){
    int res=-1;
    int l=0,r=n-1;
    while(l<r){
        int m=(l+r)/2;
        if(a[m]==x){
            res=m;
            r=m-1;
        }
        else if(a[m]<x)
            l=m+1;
        else
            r=m-1;
    }
    return res;
}
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int x;cin>>x;
//Tìm trong mảng bình thường
//binary_search(a+x,a+y,key)
    if(binary_search(a,a+n,x)){
        cout << "FOUND!\n";
    }
    else cout << "NOT FOUND!\n";
//Tìm trong vector
//binary_search(v.begin(),v.end(),key)
//Tìm trên 1 đoạn binary_search(v.begin()+x,v.begin()+y,key)
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(binary_search(v.begin(),v.end(),x)){
        cout << "FOUND!\n";
    }
    else cout << "NOT FOUND!\n";
    return 0;
}