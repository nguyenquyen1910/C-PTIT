#include<bits/stdc++.h>
using namespace std;
template <typename T>
string to_string(T value){
	ostringstream os;
	os << value;
	return os.str();
}
class Type;
class Movie;
map<string,Type> mp;
int cnt=0;
class Type{
    friend class Movie;
    public:
    	string id,type;
    	Type(){
    		id=type="";
		}
		friend istream& operator >> (istream& in,Type& a){
			cnt++;
			if(cnt==1) in.ignore();
			a.id="TL"+string(3-to_string(cnt).size(),'0')+to_string(cnt);
			getline(in,a.type);
			mp[a.id]=a;
			return in;
		}
};
int cnt1=0;
class Movie{
	public:
		string ma,id,date,name;
		int sl,d,m,y;
		Movie(){
			id=date=name="";
			sl=d=m=y=0;
		}
		friend istream& operator >> (istream& in,Movie& a){
			cnt1++;
			a.ma="P"+string(3-to_string(cnt1).size(),'0')+to_string(cnt1);
			in>>a.id>>a.date;
			in.ignore();
			getline(in,a.name);
			in>>a.sl;
			a.d=(a.date[0]-'0')*10+(a.date[1]-'0');
			a.m=(a.date[3]-'0')*10+(a.date[4]-'0');
			a.y=(a.date[6]-'0')*1000+(a.date[7]-'0')*1000+(a.date[8]-'0')*10+(a.date[9]-'0');
			return in;
		}
		friend ostream& operator << (ostream& out,Movie a){
			out << a.ma << " " << mp[a.id].type << " " << a.date << " " << a.name << " " << a.sl << endl;
			return out;
		}
};
bool cmp(Movie a,Movie b){
	if(a.date!=b.date){
		if(a.y!=b.y) return a.y<b.y;
		else if(a.y==b.y && a.m!=b.m) return a.m<b.m;
		else return a.d<b.d;
	}
	else if(a.name!=b.name) return a.name<b.name;
	return a.sl>b.sl;
}
int main(){
    int n,m;cin>>n>>m;
    Type a[n];
    Movie b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(b,b+m,cmp);
    for(int i=0;i<m;i++) cout << b[i];
    return 0;
}
