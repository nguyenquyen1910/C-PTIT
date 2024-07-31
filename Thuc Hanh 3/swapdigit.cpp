#include<bits/stdc++.h>
using namespace std;
string swapdigit(string s){
	int n=s.size();
	for(int i=n-1;i>=0;i--){
		if(s[i]<s[i-1]){
			int tmp=i;
			for(int j=i;j<n;j++){
				if(s[j]>s[tmp] && s[j]<s[i-1]){
					tmp=j;
				}
			}
			swap(s[tmp],s[i-1]);
			return s;
		}
	}
	return "-1";
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		cout << swapdigit(s) << endl;
	}
	return 0;
}
