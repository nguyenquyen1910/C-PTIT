#include<bits/stdc++.h>
using namespace std;
#define e 1000000
int prime[e];
void solve(int n){
	prime[0]=prime[1]=0;
	for(int i=2;i<n;i++){
		prime[i]=1;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(prime[i]){
			for(int j=i*i;j<=n;j+=i){
				prime[j]=0;
			}
		}
	}
}
int main(){
	solve(e+1);
	int t;cin>>t;
	while(t--){
		int l,r,cnt=0;cin>>l>>r;
		for(int i=l;i<=r;i++){
			if(prime[i]){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
