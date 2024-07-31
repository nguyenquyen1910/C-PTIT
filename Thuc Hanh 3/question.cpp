#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
    cin.ignore();
    unordered_map<string,int> mp;
    bool check=1;
    string s,s2;
    vector<string> v;
    while(n--){
        if(check){
            getline(cin,s);
            v.push_back(s);
            check=0;
        }
        else{
            getline(cin,s2);
            if(s2==""){
                check=1;
            }
            else mp[s]++;
        }
    }
    for(auto it : v){
    	if(mp[it]){
    		cout << it << ": " << mp[it] << endl;
		}
		mp[it]=0;
	}
	return 0;
}
