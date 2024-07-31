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
//Xây dựng cây nhị phân
//ví dụ nốt gốc là i thì 2 nốt con là 2i+1 và 2i+2
//Heap: cây nhị phân hoàn chỉnh-> nốt cha lớn hơn 2 nốt con(max heap) ngược lại(min heap)
void heapify(int a[],int n,int i){
    int l=2*i+1;
    int r=2*i+2;
    int largest=i;
    if(l<n && a[l]>a[largest]){
        largest=l;
    }
    if(r<n && a[r]>a[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}
void heapsort(int a[],int n){
    //Xây dựng max heap
    for(int i=n/2-1;i>=0;i--){
        heapify(a,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(a[i],a[0]);
        heapify(a,i,0);
    }
}
int main(){
    int n;cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    heapsort(a,n);//heap sort
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}