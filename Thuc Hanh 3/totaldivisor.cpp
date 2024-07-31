#include<bits/stdc++.h>
using namespace std;
int totaldivisor(int n){
	int sum=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				sum+=i;
				n/=i;
			}
		}
	}
	if(n!=1) sum+=n;
	return sum;
}
int main(){
	int n;cin>>n;
	int sum=0;
	while(n--){
		int x;cin>>x;
		sum+=totaldivisor(x);
	}
	cout << sum;
	return 0;
}
