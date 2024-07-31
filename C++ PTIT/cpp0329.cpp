#include<bits/stdc++.h>
using namespace std;
string subtraction(string a,string b){
    while(a.size()!=b.size()) b="0"+b;
    string res;int x;
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]>=b[i]){
            x=a[i]-b[i];
        }
        else{
            x=a[i]-b[i]+10;
            a[i-1]-=1;
        }
        res.push_back(x+'0');
    }
    reverse(res.begin(),res.end());
    return res;
}
string summation(string a, string b) {
	if(a.length()<b.length()) swap(a, b);
	while(a.length() != b.length()) b.insert(0, "0");
	string c;
	int nho = 0;
	for (int i = a.length()-1; i >= 0; i--) {
		int x = a[i]+b[i]-96+nho;
		nho = x / 10;
		c.push_back(x % 10 + '0');
	}
	if(nho > 0) c.push_back(nho + '0');
	reverse(c.begin(),c.end());
	return c;
}
int main() {
	int t; cin >> t;
	while (t--) {
		string a, b; cin >> a >> b;
		int z;
		string c,d="0", e;
		for(int i=0;i<a.length();i++){
			c.push_back(a[i]);
			d.push_back('0');
			int o = 0; 
			while (( c.length() == b.length() && c>b)||c.length()>b.length()){
					o++;
					c = subtraction(c, b);
					while (c[0]=='0') c.erase(0, 1);
			}
			string e=""; e.push_back(o +'0');
			d = summation(d, e);
		}
		if (c == b) d=summation(d, "1");
		if (a.length()<b.length() || a.length()==b.length() && a<b) cout << "0" << endl;
		else{
			while(d[0] == '0') d.erase(0, 1);
			cout << d << endl;
		}
	}
}