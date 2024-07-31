// Khởi tạo a[i]=i(1<=i<=k)
// Lặp
//     Tìm i max sao cho a[i]>=n-k+i(Nếu không tìm được thì dừng)
//     Thay thế a[i]=a[i]+1
//     a[j]=a[i]+j-i(i+1<=j<=k)
#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
void Thke(int *a,int n,int k){
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
    while(1){
        for(int i=1;i<=k;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        int i=k;
        while(i>0 && a[i]>=n-k+i) --i;
        if(i==0) return;
        a[i]=a[i]+1;
        for(int j=i+1;j<=k;j++){
            a[j]=a[i]+j-i;
        }
    }
}
int main(){
    cin>>n>>k;
    Thke(a,n,k);
    return 0;
}