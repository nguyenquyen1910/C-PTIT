#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    auto it=lower_bound(a,a+n,x);//Tìm ra vị trí đầu tiên lớn hơn hoặc bằng x
    cout << *it << endl;//In ra giá trị tại đó
    cout << it-a << endl;//In ra chỉ số
    return 0;
}