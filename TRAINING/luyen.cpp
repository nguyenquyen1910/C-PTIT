#include<bits/stdc++.h>
using namespace std;
int a[100],n,k,th[100];
int check(int th[],int k){
	for(int i=1;i<k;i++){
		if(a[th[i]]<=a[th[i+1]]){
			return 0;
		}
	}
	return 1;
}
void THKe(int th[],int n,int k){
	for(int i=1;i<=k;i++){
		th[i]=i;
	}
	while(1){
		if(check(th,k)){
			for(int i=1;i<=k;i++){
				cout << a[th[i]] << " ";
			}
			cout << endl;
		}
		int i=k;
		while(i>0 && th[i]>=n-k+i) i--;
		if(i==0) return;
		th[i]=th[i]+1;
		for(int j=i+1;j<=k;j++){
			th[j]=th[i]+j-i;
		}
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	THKe(th,n,k);
	return 0;
}