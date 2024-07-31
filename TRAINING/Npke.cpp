// Khởi tạo a[i]=0
// Lặp
//     Tìm i max sao cho a[i]=0(Nếu không tìm được thì dừng)
//     a[i]=1
//     a[j]=0(i+1<=i<=n)
#include<bits/stdc++.h>
using namespace std;
int n,a[100];
void NpKe(int a[],int n){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
    while(1){
        for(int i=1;i<=n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        int i=n;
        while(i>0 && a[i]==1){
            a[i]=0;
            --i;
        }
        if(i==0) return;
        else{
            a[i]=1;
        }
    }
}
int main(){
    cin>>n;
    NpKe(a,n);
    return 0;
}