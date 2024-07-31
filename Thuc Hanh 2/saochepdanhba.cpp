#include<bits/stdc++.h>
using namespace std;
template <typename T>
string to_string(T value){
	ostringstream os;
	os << value;
	return os.str();
}
class DanhBa{
	public:
		string name,phone,date,ho,ten;
		DanhBa(){
			name=phone=date=ho=ten="";
		}
		friend ostream& operator << (ostream& out,DanhBa a){
			out << a.name << ": " << a.phone << " " << a.date << endl;
			return out;
		}
};
bool checkdate(string s){
	return s.find("Ngay")!=string::npos;
}
bool checkphone(string s){
	return isdigit(s[0]);
}
string remakedate(string s){
	string res="";
	for(int i=5;i<s.size();i++){
		res+=s[i];
	}
	if(res[1]=='/') res="0"+res;
	if(res[4]=='/') res.insert(3,"0");
	return res;
}
string remakename(string s){
	string res="";
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		res+=toupper(tmp[0]);
		for(int i=1;i<tmp.size();i++){
			res+=tolower(tmp[i]);
		}
		res+=" ";
	}
	res.erase(res.end()-1);
	return res;
}
string getten(string s){
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	return v[v.size()-1];
}
string getho(string s){
	vector<string> v;
	string res="";
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	for(int i=0;i<v.size()-1;i++){
		res+=v[i]+" ";
	}
	res.erase(res.end()-1);
	return res;
}
bool cmp(DanhBa a,DanhBa b){
	if(a.ten!=b.ten)
		return a.ten<b.ten;
	return a.ho<b.ho;
}
int main(){
	DanhBa a[1000];
	int cnt=0;
	ifstream filein;
	filein.open("vanban.txt",ios_base::in);
	string s,day;
	while(getline(filein,s)){
		if(checkdate(s)){
			a[cnt].date=s;
			day=s;
		}
		else if(checkphone(s)){
			a[cnt].phone=s;
			if(a[cnt].date=="") a[cnt].date=day;
			cnt++;		
		}
		else a[cnt].name=s;
	}
	for(int i=0;i<cnt;i++){
		a[i].date=remakedate(a[i].date);
		a[i].name=remakename(a[i].name);
		a[i].ten=getten(a[i].name);
		a[i].ho=getho(a[i].name);
	}
	sort(a,a+cnt,cmp);
	for(int i=0;i<cnt;i++){
		cout << a[i];
	}
	return 0;
} 
