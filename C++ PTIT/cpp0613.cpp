#include<bits/stdc++.h>
using namespace std;
int stt=1;
class SinhVien{
	public:
		string msv, ten, lop, nsinh;
    	float gpa;
		friend istream &operator >> (istream &in, SinhVien &a) {
			scanf("\n");//như này sẽ không bị RTE
			getline(in, a.ten);
			in >> a.lop >> a.nsinh >> a.gpa;
			string str = "", temp;
			stringstream ss(a.ten);
			while (ss >> temp) {
				transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
				temp[0] = toupper(temp[0]);
				str += temp + " ";
			}
			str.pop_back();
			a.ten = str;
			a.msv="B20DCCN"+string(3-to_string(stt).size(),'0')+to_string(stt);
			stt++;
			if(a.nsinh[2] != '/') a.nsinh.insert(0, "0");
			if(a.nsinh[5] != '/') a.nsinh.insert(3, "0");
			return in;
		}
		friend ostream &operator << (ostream &os, SinhVien a) {
        	os << a.msv << " " << a.ten << " " << a.lop << " " << a.nsinh << " ";
        	os << fixed << setprecision(2) << a.gpa << "\n";
        	return os;
    	}
};
bool cmp(SinhVien a,SinhVien b){
	return a.gpa>b.gpa;
}
void sapxep(SinhVien *a,int n){
	sort(a,a+n,cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}