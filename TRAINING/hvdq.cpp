// Backtracking(m){
//     for(với mọi i thuộc Di){
//         if(nếu i thõa mãn điều kiện){
//             <Chọn i cho X[m]>
//             if(chọn cho đủ n thành phần){
//                 <Đưa ra cấu hình>
//             }
//             else{
//                 Backtracking(m+1);
//                 <Bỏ chọn i cho X[m]>
//             }
//         }
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],n;
void HVDQ(int m){
    if(m>n){
        for(int i=1;i<=n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    for(int i=1;i<=n;i++){
        if(b[i]==0){
            a[m]=i;
            b[i]=1;
            HVDQ(m+1);
            b[i]=0;
        }
    }
}
void LKHVDQ(int a[],int n){
    for(int i=1;i<=n;i++){
        b[i]=0;
    }
    HVDQ(1);
}
int main(){
    cin>>n;
    LKHVDQ(a,n);
    return 0;
}