#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;getline(cin,s);
	stringstream ss(s);
	string tmp,res="";
	vector<string> v;
	while(ss >> tmp){
		for(int i=0;i<tmp.size();i++){
			tmp[i]=tolower(tmp[i]);
		}
		v.push_back(tmp);
	}
	for(int i=0;i<v.size()-1;i++){
		res+=v[i][0];
	}
	res+=v[v.size()-1];
	cout << res+"@ptit.edu.vn";
	return 0;
}
