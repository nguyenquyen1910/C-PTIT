#include<bits/stdc++.h>
using namespace std;
class TheLoai;
map<string,TheLoai> mp;
int cnttl=0;
class TheLoai{
	public:
		string id,name;
		TheLoai(){
			id=name="";
		}
		friend istream& operator >> (istream& in,TheLoai& a){
			cnttl++;
			a.id="TL"+string(3-to_string(cnttl).size(),'0')+to_string(cnttl);
			getline(in,a.name);
			mp[a.id]=a;
			return in;
		}
};
int cntp=0;
class Phim{
	public:
		string id,ma,day,name;
		int tap,dd,mm,yyyy;
		Phim(){
			id=ma=day=name="";
			tap=dd=mm=yyyy=0;
		}
		friend istream& operator >> (istream& in,Phim& a){
			cntp++;
			a.id="P"+string(3-to_string(cntp).size(),'0')+to_string(cntp);
			in>>a.ma;
			in>>a.day;
			in.ignore();
			getline(in,a.name);
			in>>a.tap;
			a.dd=(a.day[0]-'0')*10+a.day[1]-'0';
			a.mm=(a.day[3]-'0')*10+a.day[4]-'0';
			a.yyyy=(a.day[6]-'0')*1000+(a.day[7]-'0')*100+(a.day[8]-'0')*10+a.day[9]-'0';
			return in;
		}
		friend ostream& operator << (ostream& out,Phim a){
			out << a.id << " " << mp[a.ma].name << " " << a.day << " " << a.name << " " << a.tap << endl;
			return out;
		}
};
bool cmp(Phim a,Phim b){
	if(a.day!=b.day){
		if(a.yyyy!=b.yyyy)
			return a.yyyy<b.yyyy;
		else if(a.yyyy==a.yyyy && a.mm!=b.mm)
			return a.mm<b.mm;
		else if(a.yyyy==a.yyyy && a.mm==b.mm && a.dd!=b.dd)
			return a.dd<b.dd;
	}
	else if(a.day==b.day && a.name!=b.name)
		return a.name<b.name;
	return a.tap>b.tap;
}
void process(TheLoai *a,int n,Phim *b,int m){
	sort(b,b+m,cmp);
}
int main(){
	int n,m;
	cin>>n>>m;
	cin.ignore();
	TheLoai tl[100];
	Phim p[1000];
	for(int i=0;i<n;i++){
		cin>>tl[i];
	}
	for(int i=0;i<m;i++){
		cin>>p[i];
	}
	process(tl,n,p,m);
	for(int i=0;i<m;i++){
		cout << p[i];
	}
	return 0;
}

