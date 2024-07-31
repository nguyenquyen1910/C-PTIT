#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];map<int,int> mp;
	for(auto &x : a){ 
		cin>>x;
		mp[x]++;
	}
	vector<int> v;
	for(auto x : mp){
		if(x.second>n/2){
			v.push_back(x.first);
		}
	}
	if(v.size()==0){
		cout << -1;
	}
	else{
		for(auto x : v){
			cout << x << " ";
		}
	}
	return 0;
}
