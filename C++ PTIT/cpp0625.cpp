#include<bits/stdc++.h>
using namespace std;
class GiangVien{
    public:
        string id,name,sub,mon,ln;
        GiangVien(){
            id=name=sub="";
        }
        friend istream& operator >> (istream&,GiangVien&); 
        friend ostream& operator << (ostream&,GiangVien); 
        friend bool operator < (GiangVien, GiangVien);
};
int cnt=0;
string findlastname(string s){
    stringstream ss(s);
    string tmp,res;
    vector<string> v;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    res=v[v.size()-1];
    return res;
}
string viettat(string &s){
    stringstream ss(s);
    string tmp;
    string res="";
    while(ss >> tmp){
        res+=toupper(tmp[0]);
    }
    return res;
}
istream& operator >> (istream& in,GiangVien& a){
    cnt++;
    a.id="GV"+string(2-to_string(cnt).size(),'0')+to_string(cnt);
    getline(in,a.name);
    a.ln=findlastname(a.name);
    getline(in,a.sub);
    a.mon=viettat(a.sub);
    return in;
}
ostream& operator << (ostream& out,GiangVien a){
    out << a.id << " " << a.name << " " << a.mon << endl;
    return out;
}
bool operator < (GiangVien a, GiangVien b){
    if(a.ln==b.ln)
        return a.id<b.id;
    return a.ln<b.ln;
}
void sapxep(GiangVien *a,int n){
    sort(a,a+n);
}
int main(){
    int n;cin>>n;
    GiangVien a[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sapxep(a,n);
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    return 0;
}