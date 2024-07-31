#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
//Đọc số nguyên tố trong file input và ghi ra file output
void problem1(){
    ifstream filein;
    filein.open("input.txt",ios_base::in);
    int a[100];
    int n=0;
    filein >> n;
    for(int i=0;i<n;i++){
        filein >> a[i];
    }
    filein.close();
    ofstream fileout;
    fileout.open("output.txt",ios_base::out);
    for(int i=0;i<n;i++){
        if(prime(a[i])){
            fileout << a[i] << " ";
        }
    }
    fileout.close();
}
//Chỉ có 1 dòng duy nhất chứa các số nguyên tìm và in ra số nguyên tố
void problem2(){
    ifstream filein;
    filein.open("input.txt",ios_base::in);
    vector<int> v;
    int n;
    while(filein.eof()==false){
        filein>>n;
        v.push_back(n);
    }
    filein.close();
    ofstream fileout;
    fileout.open("output.txt",ios_base::out);
    for(int i=0;i<v.size();i++){
        if(prime(v[i])){
            fileout << v[i] << " ";
        }
    }
    fileout.close();
}
//Input chứa các số nguyên cách nhau bởi dấu phẩy
void problem3(){
    ifstream filein;
    filein.open("input.txt",ios_base::in);
    string tmp;
    getline(filein,tmp);
    vector<int> v;
    int n;
    stringstream ss(tmp);
    while(ss >> n){
        v.push_back(n);
        if(ss.peek()==','){
            ss.ignore();
        }
    }
    filein.close();
    ofstream fileout;
    fileout.open("output.txt",ios_base::out);
    for(int i=0;i<v.size();i++){
        fileout << v[i] << " ";
    }
    fileout.close();
}
//input gồm 1 chuỗi từ cách nhau bởi dấu cách và tách các từ ấy ra rồi chuẩn hóa
string chuanhoa(string s){
    string res="";
    res+=toupper(s[0]);
    for(int i=1;i<s.size();i++){
        res+=tolower(s[i]);
    }
    return res;
}
void problem4(){
    ifstream filein;
    filein.open("input.txt",ios_base::in);
    string tmp;
    getline(filein,tmp);
    vector<string> v;
    stringstream ss(tmp);
    while(ss >> tmp){
        string x=chuanhoa(tmp);
        v.push_back(x);
    }
    filein.close();
     ofstream fileout;
    fileout.open("output.txt",ios_base::out);
    for(int i=0;i<v.size();i++){
        fileout << v[i] << " ";
    }
    fileout.close();
}
//Input gồm 1 văn bản nhiều dòng và yêu cầu chuẩn hóa
void problem5(){
    ifstream filein;
    filein.open("input.txt",ios_base::in);
}
int main(){
    problem4();
    return 0;
}