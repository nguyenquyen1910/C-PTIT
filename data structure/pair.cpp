#include<iostream>
#include<vector>
using namespace std;
// pair<datatype1,datatype2> v;
// make_pair(a,b) ~ = {a,b};
// v.first
// v.second
// tuple<int,int,int> t={a,b,c}
// Muốn truy cập đến trong tuple thì cần sử dụng chỉ số của nó ví dụ
// get<0>(t) để truy cập đến a

int main(){
    pair<int,int> v = {100,200};
    cout << v.first << " " << v.second << endl;
    return 0;
}