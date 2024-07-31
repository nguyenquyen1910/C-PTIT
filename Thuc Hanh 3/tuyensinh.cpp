#include<bits/stdc++.h>
using namespace std;
class TuyenSinh{
	public:
		string id,name,tt;
		float t,l,h,uutien;
		TuyenSinh(){
			id=name=tt="";
			t=l=h=uutien=0.0;
		}
		friend istream& operator >> (istream& in,TuyenSinh &a){
			in>>a.id;
			in.ignore();
			getline(in,a.name);
			in>>a.t>>a.l>>a.h;
			if(a.id.find("KV1")!=string::npos){
				a.uutien=0.5;
			}
			else if(a.id.find("KV2")!=string::npos){
				a.uutien=1.0;
			}
			else a.uutien=2.5;
			if(a.t*2+a.l+a.h+a.uutien>=24) a.tt="TRUNG TUYEN";
			else a.tt="TRUOT";
			return in;
		}
		friend ostream& operator << (ostream& out,TuyenSinh a){
			out << a.id << " " << a.name << " " << a.uutien << " " << a.t*2+a.l+a.h << " ";
			out << a.tt;
			return out;
		}
};
int main(){
	TuyenSinh a;cin>>a;
	cout << a;
	return 0;
}
