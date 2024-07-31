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
//Để tìm số cặp số nguyên tố cùng nhau của 1 số
//Công thức n*(1-1/p)
//p: là tất cả các số nguyên tố mà n phân tích được(p chạy từ nhỏ đến lớn)
long long phi(long long n){
    long long res=n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0) n/=i;
            res-=res/i;
        }
    }
    if(n!=1){
        res-=res/n;
    }
    return res;
}
int main(){
    long long n;cin>>n;
    cout << phi(n);
    return 0;
}