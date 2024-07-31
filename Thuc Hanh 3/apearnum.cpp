#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	map<int,int> mp;
	while(t--){
		int n,x;cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		cout << mp[x] << endl;
	}
	return 0;
}
