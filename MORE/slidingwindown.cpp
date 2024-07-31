#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//Tìm tổng k phần tử lớn nhất
void problem1(){
    int n,k;cin>>n>>k;
        int a[1001];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll sum=0;
        for(int i=0;i<k;i++) sum+=a[i];
        ll res=sum,idx=0;
        for(int i=k;i<n;i++){
            sum=sum-a[i-k]+a[i];
            if(sum>res){
                res=sum;
                idx=i-k+1; 
            }
        }
        cout << res << endl;
        for(int i=0;i<k;i++){
            cout << a[idx+i] << " ";
        }
        cout << endl;
}
//Số phép hoán vị các phần tử bé hơn bằng số k cho trước ở cạnh nhau
void problem2(){
    int n,k;cin>>n>>k;
    int a[n];
    int d=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=k) ++d;
    }
    int cnt=0;
    for(int i=0;i<d;i++){
        if(a[i]<=k) ++cnt;
    }
    int ans=cnt;
    for(int i=d;i<n;i++){
        if(a[i-d]<=k) --cnt;
        if(a[i]<=k) ++cnt;
        ans=max(ans,cnt);
    }
    cout << d-ans << endl;
}
//Sửa đèn có N chiếc đèn, B là số chiếc đèn hỏng , tìm số lượng đèn sửa để 1 khu vực có ít nhất K đèn liên tiếp hoạt đọng
void problem3(){
    int n,k,b;cin>>n>>k>>b;
    int a[10001]={0};
    for(int i=0;i<b;i++){
        int x;cin>>x;
        a[x]=1;
    }
    int cnt=0;
    for(int i=1;i<=k;i++){
        if(a[i]==1) ++cnt;
    }
    int ans=cnt;
    for(int i=k;i<n;i++){
        cnt=cnt-a[i-k]+a[i];
        ans=min(ans,cnt);
    }
    cout << ans << endl;
}
//Kiểm tra xem trong k phần tử liên tiếp có phần tử nào giống nhau hay không
bool problem4(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    set<int> se;bool ok=false;
    for(int i=0;i<k;i++){
        if(se.count(a[i])){
            return true;
        }
        se.insert(a[i]);
    }
    for(int i=k;i<n;i++){
        se.erase(a[i-k]);
        if(se.count(a[i])) return true;
        se.insert(a[i]);
    }
    return false;
}
//Có cửa sổ nào cỡ k trong đó có 2 phần tử nào chênh lệch không quá t không
bool problem5(){
    int n,k,t;cin>>n>>k>>t;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    multiset<int> ms;
    for(int j=0;j<k;j++){
        //Kiểm tra xem trong ms có phần tử nào lớn hơn a[j]-t hay không
        auto it=ms.lower_bound(a[j]-t);
        if(it!=ms.end() && *it<=a[j]+t){
            return true;
        }
        ms.insert(a[j]);
    }
    for(int j=k;j<n;j++){
        ms.erase(ms.find(a[j-k]));
        auto it=ms.lower_bound(a[j]-t);
        if(it!=ms.end() && *it<=a[j]+t){
            return true;
        }
        ms.insert(a[j]);
    }
    return false;
}
int main(){
    int t;cin>>t;
    while(t--){
        if(problem5()) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}