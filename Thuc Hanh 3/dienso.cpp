#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];set<int> se;
		for(int i=0;i<n;i++){
			cin>>a[i];
			se.insert(a[i]);
		}
		int cnt=0;
		for(int i=*min_element(a,a+n);i<=*max_element(a,a+n);i++){
			if(se.count(i)==0){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
