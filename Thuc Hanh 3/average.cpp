#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<float> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	float average=0.0;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(v[i]!=*max_element(v.begin(),v.end()) && v[i]!=*min_element(v.begin(),v.end())){
			average+=v[i];
			cnt++;
		}
	}
	cout << fixed << setprecision(2) << average/cnt;
	return 0;
}
