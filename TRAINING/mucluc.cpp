#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
struct Type{
	string name = "";
	int page = 0;
	int level = 0;
	void print(){
		for (int i=0; i<level; i++) cout << ">";
		cout << name << "--- ";
		cout << page << "\n";
	}
};
int checkPage(string s){
	string res = "";
	for (int i=0; i<min((int)s.size(), 4); i++){
		res += s[i];
	}
	return (res == "Page");
}
int checkTitle(string s){
	string res = "";
	for (int i=0; i<min(int(s.size()), 5); i++){
		res += s[i];
	}
	return (res == "Level");
}
int main(){
	faster();
	freopen("VANBAN.txt","r",stdin);
	freopen("MUCLUC.txt", "w", stdout);
	Type a[10000];
	string s;
	int id = 0, prevPage;
	while(getline(cin,s)){
		if (checkPage(s)){
			prevPage = s[5] - '0';
		}
		else if (checkTitle(s)){
			a[id].page = prevPage;
			string alo = "";
			for (int i=8; i<s.size(); i++){
				alo += s[i];
			}
			a[id].name = alo;
			a[id].level = s[5] - '0';
			id++;
		}
	}
	for (int i=0; i<id; i++){
		a[i].print();
	}
}
