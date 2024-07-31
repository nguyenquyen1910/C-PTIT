// Khởi tạo a[i]=i
// Lặp
//     Tìm i max sao cho a[i]<a[i+1](Nếu không tìm được thì dừng)
//     Tìm k max sao cho a[k] min lớn hơn a[i] sau đó đổi vị trí a[i],a[k]
//     Lật mảng từ i+1->n
#include<bits/stdc++.h>
using namespace std;
int n,a[100],k;
void HvKe(int a[],int n){
	for(int i=1;i<=n;i++) a[i]=i;
	while(1){
		for(int i=1;i<=n;i++) cout << a[i] << " ";
		cout << endl;
		int i=n-1;
		while(i>0 && a[i]>a[i+1]) --i;
		if(i==0) return ;
		int k=n;
		while(a[k]<a[i]) --k;
		swap(a[i],a[k]);
		int l=i+1,r=n;
		while(l<r){
			int tmp=a[l];
			a[l]=a[r];
			a[r]=tmp;
			++l;--r;
		}
	}
}
int main(){
	cin>>n;
	HvKe(a,n);
	return 0;
}