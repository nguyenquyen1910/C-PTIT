#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    public:
        string id,name,lop,email,phone,sdt;
        SinhVien(){
            id=name=lop=phone=email=sdt="";
        }
        friend ostream& operator << (ostream& out, SinhVien a){
            out << a.id << " " << a.name << " " << a.lop << " " << a.email << " " << a.phone << endl;
            return out;
        } 
};
bool check(string s){
    for(int i=0;i<s.size();i++){
        if(!isdigit(s[i])){
            return false;
        }
    }
    return true;
}
string chphone(string s){
    string res="";
    res="0"+s;
    return res;
}
bool isid(string s){
    if(s[0]=='B' && isdigit(s[1]) && isdigit(s[2])){
        return true;
    }
    return false;
}
bool islop(string s){
    if(s[0]=='D' && isdigit(s[1]) && isdigit(s[2])){
        return true;
    }
    return false;
}
bool cmp(SinhVien a,SinhVien b){
    if(a.lop!=b.lop){
        return a.lop<b.lop;
    }
    return a.id<b.id;
}
bool isemail(string s){
    if(s.find("@gmail.com")==string::npos){
        return false;
    }
    return true;
}
int main(){
    ifstream filein;
    filein.open("DANHSACH.in",ios_base::in);
    SinhVien a[1000];
    int cnt=0;
    string line;
    while(getline(filein,line)){
        if(check(line)){
            a[cnt].phone=line;
            a[cnt].phone="0"+a[cnt].phone;
            cnt++;
        }
        else if(isid(line)) {
            a[cnt].id=line;
        }
        else if(islop(line)){ 
            a[cnt].lop=line;
            
        }
        else if(isemail(line)) {
            a[cnt].email=line;
            
        }
        else{
            a[cnt].name=line;
        }
    }
    filein.close();
    sort(a,a+cnt,cmp);
    for(int i=0;i<cnt;i++){
        cout << a[i];
    }
    return 0;
}