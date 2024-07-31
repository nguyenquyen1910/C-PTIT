#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int cnt=0,start;
		for(int i=0;i<n;i++){
			start=lower_bound(a+i+1,a+n,k-a[i])-a;
			cnt+=n-start;
		}
		cout << cnt << endl;
	}
	return 0;
}
