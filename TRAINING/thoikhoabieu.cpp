#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
struct Mem{
	string name = "";
	string sdt = "" ;
	string date = "";
	void print(){
		cout << name << ": " << sdt << " " << date << "\n";
	}
};
int isNum(string s){
	if (isdigit(s[0])) return 1;
	return 0;
}
int isDate(string s){
	string res = "";
	for (int i=0; i<min((int)s.size(), 4); i++){
		res += s[i];
	}
	return (res == "Ngay");
}
string ch(string date){
	string res = "";
	for (int i=5; i<date.size(); i++) res += date[i];
	date = res;
    if (date[2] != '/') date = "0" + date;
    if (date[5] != '/'){
        string res = "";
        for (int i=0; i<3; i++){
            res += date[i];
        }
        res += "0";
        for (int i=3; i<date.size(); i++) res += date[i];
        date = res;
    }
    return date;
}
string chName(string name){
    string res = "";
    stringstream ss(name);
    string ans = "";
    while(ss >> res){
        res[0] = toupper(res[0]);
        for (int i=1; i<res.size(); i++){
            res[i] = tolower(res[i]);
        }
        ans = ans + res + " ";
    }
    ans.pop_back();
    return ans;
}
string getName(string s){
	string res = "";
	for (int i=s.size()-1; i>=0; i--){
		if (s[i] != ' ') res += s[i];
		else break;
	}
	reverse(res.begin(), res.end());
	return res;
}
string getHo(string s){
	int x = s.size() - min((int) s.size(), (int)getName(s).size() + 1);
	// cout << x << "\n";
	string res = "";
	for (int i=x-1; i>=0; i--){
		if (s[i] != ' ') res += s[i];
		else break;
	}
	reverse(res.begin(), res.end());
	return res;
}
bool comp(Mem a, Mem b){
	if (getName(a.name) == getName(b.name)) return getHo(a.name) < getHo(b.name);
	return getName(a.name) < getName(b.name);
}
int main(){
	faster();
	freopen("SOTAY.txt","r",stdin);
	freopen("DIENTHOAI.txt", "w", stdout);
	string check;
	Mem a[10000];
	int id = 0;
	string prevDate;
	while(getline(cin,check)){
		if (isDate(check)){
			 a[id].date = check;
			 prevDate = check;
		}
		else if (isNum(check)){
			a[id].sdt = check;
			if (a[id].date == "") a[id].date = prevDate;
			id++;
		}
		else a[id].name = check;
	}
	for (int i=0; i<id; i++){
		a[i].name = chName(a[i].name);
		a[i].date = ch(a[i].date);
	}
	sort(a,a+id,comp);
	for (int i=0; i<id; i++){
		a[i].print();
	}
}