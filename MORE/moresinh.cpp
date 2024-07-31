#include<iostream>
#include<algorithm>
using namespace std;
int n,k,a[100],ok;
void ktao(){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}
//Sinh tổ hợp chập k của n
void sinh(){
    int i=k;
    while(i>=1 && a[i]==n-k+i){
        --i;
    }
    if(i==0){
        ok=0;//Đây là cấu hình cuối cùng
    }
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}
//Sinh hoán vị
void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}
void sinhketiep(){
    int i=n-1;
    while(i>=1 && a[i]>a[i+1]){
        --i;
    }
    if(i==0){
        ok=0;//Cau hinh cuoi cung
    }
    else{
        int j=n;
        while(a[i]>a[j]) --j;
        swap(a[i],a[j]);
        int l=i+1,r=n;
        while(l<r){
            swap(a[l],a[r]);
            ++l;--r;
        }
    }
}
//Có thể sử dụng hàm có sẵn
void sudungham(){
    cin>>n;
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    do{
        for(int i=0;i<n;i++){
            cout << a[i];
        }
        cout << endl;
    }while(next_permutation(a,a+n));
}

//Sinh ra hoán vị ngược
void sinhnguoc(){
    cin>>n;
    for(int i=0;i<n;i++){
        a[i]=n-i;
    }
    do{
        for(int i=0;i<n;i++){
            cout << a[i];
        }
        cout << endl;
    }while(prev_permutation(a,a+n));
}

//Có thể áp dụng cho string

int main(){
    // cin>>n;
    // khoitao();
    // ok=1;
    // while(ok){
    //     for(int i=1;i<=n;i++){
    //         cout << a[i];
    //     }
    //     cout << endl;
    //     sinhketiep();
    // }
    sudungham();
    return 0;
}