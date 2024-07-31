#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define zero(n) setw(n) << setfill('0')
int N, M, K, i;
class KhachHang;
class MatHang;
class HoaDon;

map<int, KhachHang> mpkh;
map<int, MatHang> mpmh;

int cntkh = 0;

class KhachHang {
    friend class HoaDon;
public:
	int id;
	string name, gioitinh, ngaysinh, diachi;
public:
	friend istream& operator >> (istream& is, KhachHang& x) {
		cntkh++;

		if (cntkh == 1) is.ignore();

		x.id = cntkh;

		getline(is, x.name);
		getline(is, x.gioitinh);
		getline(is, x.ngaysinh);
		getline(is, x.diachi);

		mpkh[x.id] = x;

		return is;
	}
};

int cntmh = 0;

class MatHang {
	friend class HoaDon;
public:
	int id;
	string name, donvi;
	int giamua, giaban;
public:
	friend istream& operator >> (istream& is, MatHang& x) {
		is.ignore();
		cntmh++;
		x.id = cntmh;

		getline(is, x.name);
		getline(is, x.donvi);
		is >> x.giamua >> x.giaban;

		mpmh[x.id] = x;
		return is;
	}
};

int cnthd = 0;

class HoaDon {
public:
	int id;
	string id_KhachHang;
	string id_MatHang;
	int num;
	int loinhuan;
public:
	friend istream& operator >> (istream& is, HoaDon& x) {
		cnthd++;
		x.id = cnthd;
		is >> x.id_KhachHang >> x.id_MatHang >> x.num;

		int idkh = stoi(x.id_KhachHang.substr(2, 3));
		int idmh = stoi(x.id_MatHang.substr(2, 3));
		x.loinhuan = x.num * mpmh[idmh].giaban - x.num * mpmh[idmh].giamua;

		return is;
	}

	friend ostream& operator << (ostream& os, HoaDon& x) {
		int idkh = stoi(x.id_KhachHang.substr(2, 3));
		int idmh = stoi(x.id_MatHang.substr(2, 3));
		os << "HD" << zero(3) << x.id << " " << mpkh[idkh].name << " " << mpkh[idkh].diachi << " "
			<< mpmh[idmh].name << " " << mpmh[idmh].donvi << " " << mpmh[idmh].giamua << " " << mpmh[idmh].giaban << " "
			<< x.num << " " << (ll)mpmh[idmh].giaban * x.num;
		if (x.id != K) cout << "\n";

		return os;
	}
};


int main() {
	KhachHang dskh[25]; 
	int d1 = 0;
	MatHang dsmh[45];
	int d2 = 0;
	HoaDon dshd[105];
	int d3 = 0;

	ifstream fi1("KH.in");
	ifstream fi2("MH.in");
	ifstream fi3("HD.in");

	string s;
	vector<string> v;

	while (getline(fi1, s)) {
		if (s != "\n" && s != " ") v.push_back(s);
	}
	while (getline(fi2, s)) {
		if (s != "\n" && s != " ") v.push_back(s);
	}
	while (getline(fi3, s)) {
		if (s != "\n" && s != " ") v.push_back(s);
	}

	N = stoi(v[0]);
	int i = 0;
	while (i < N * 4 + 1) {
		cntkh++;
		KhachHang x;
		x.id = cntkh;
		x.name = v[++i];
		x.gioitinh = v[++i];
		x.ngaysinh = v[++i];
		x.diachi = v[++i];
		mpkh[x.id] = x;
		dskh[d1++] = x;
	}

	M = stoi(v[N * 4 + 1]);
	i = N * 4 + 1;
	while (i < N * 4 + 1 + M * 4) {
		MatHang x;
		cntmh++;
		x.id = cntmh;
		x.name = v[++i];
		x.donvi = v[++i];
		x.giamua = stoi(v[++i]);
		x.giaban = stoi(v[++i]);

		mpmh[x.id] = x;
		dsmh[d2++] = x;
	}

	K = stoi(v[N * 4 + M * 4 + 2]);
	i = N * 4 + M * 4 + 2;

	while (i < N * 4 + M * 4 + K + 2) {
		HoaDon x;
		cnthd++;
		x.id = cnthd;

		string s;
		s = v[++i];
		stringstream ss(s);
		string tmp;
		getline(ss, tmp, ' ');
		x.id_KhachHang = tmp;
		getline(ss, tmp, ' ');
		x.id_MatHang = tmp;
		getline(ss, tmp, ' ');
		x.num = stoi(tmp);

		dshd[d3++] = x;
	}

	for (int i1 = 0; i1 < K; i1++) cout << dshd[i1];
	
	
	return 0;
}