#include<iostream>
using namespace std;
//Ý tưởng
//Khởi tạo cấu hình đầu tiên
//Lặp cho đến khi gặp cấu hình cuối cùng
//In ra các cấu hình tiếp theo
int n,a[100],ok;
void ktao(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void sinh(){
    //Bắt đầu từ bit cuối cùng,tìm bit 0 đầu tiên
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        --i;
    }
    if(i==0){
        ok=0;//Đây là cấu hình cuối cùng
    }
    else{
        a[i]=1;
    }
}
int main(){
    cin>>n;
    ok=1;
    ktao();
    while(ok){
        for(int i=1;i<=n;i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}