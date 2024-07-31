#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main(){
    //Khai báo vector
    vector <int> v;
    //Thêm phần tử vào vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    //Kích thước của vector hoăc v.size()
    cout << size(v) << endl;
    //Duyệt qua từng phần tử của vector
    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    //Duyệt bằng iterator
    for(vector<int>::iterator it=v.begin();it!=v.end();++it){
        cout << *it << endl;
    }
    //Hoặc duyệt bằng auto
    for(auto its=v.begin();its!=v.end();++its){
        cout << *its << endl;
    }
    //Khai báo một mảng thuộc vector
    int n;cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    //Tách các từ rồi cho vào vector
    string s="Nguyen Viet Quyen";
    stringstream ss(s);
    string tmp;
    vector<string> v1;
    while(ss >> tmp){
        v1.push_back(tmp);
    }
    for(int i=0;i<v1.size();i++){
        cout << v1[i] << endl;
    }
    return 0;
}