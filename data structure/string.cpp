#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    //Khai báo string
    string s;
    //Nhập vào 1 chuỗi không có dấu cách
    cin >> s;
    //Nhập vào có dấu cách
    getline(cin,s);
    //Hàm độ dài của s
    int len=s.length();
    //Hàm so sánh 2 xâu theo thứ tự từ điển
    string a="abs";
    string b="cds";
    if(a>b) cout << "a lon hon b" << endl;
    else if(a==b) cout << "a bang b" << endl;
    else cout << "a be hon b" << endl;
    //Hàm cộng 2 xâu lại với nhau
    string c=a+b;
    //Hàm cắt xâu
    //Có 2 tham số truyền vào 1:chỉ số bắt đầu cắt; 2: số kí tự cần
    //Ví dụ muốn cắt xâu a từ chữ s đến sau đó 5 kí tự
    string d=a.substr(2,5);
    //Hàm chuyển xâu sang số nguyên
    //Ví dụ muốn chuyển xâu a sang dạng số
    int x=stoi(a);
    //Hàm chuyển số sang xâu
    //Ví dụ muốn chuyển số x sang xâu m
    string m=to_string(x);
    //Hàm tách từng từ ra
    string l = "java c++ python    php";
	stringstream ss(l);
	string tmp;
	while(ss>>tmp){
		cout << tmp << endl;
	}

    return 0;
}