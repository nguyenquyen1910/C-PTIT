#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
istream& operator >> (istream& in,vi& a){
    string s;in>>s;
    for(int i=0;i<s.size();i++){
        a.push_back(s[i]-'0');
    }
    return in;
}
ostream& operator << (ostream& out,const vi& a){
    for(auto x : a){
        out << x;
    }
    return out;
}
void add_zero(vi &a, int sz){
    reverse(a.begin(), a.end()); 
    while (a.size() < sz) 
        a.push_back(0); 
    reverse(a.begin(), a.end());
}
void change(vi &a, vi &b){ 
    int sz = max(a.size(), b.size());
    add_zero(a, sz);
    add_zero(b, sz);
}
//Hàm xóa số 0 vô dụng
void del_zero(vi &a){
    reverse(a.begin(),a.end());
    while(a.size()>=2){
        if(a.back()==0){
            a.pop_back();
        }
        else break;
    }
    reverse(a.begin(),a.end());
}
vi int_to_vi(int n){ 
    vi c;
    if (n==0){
        c.push_back(n);
        return c;
    } 
    while (n){
        c.push_back(n%10);
        n /= 10;
    }
    reverse(c.begin(),c.end());
    return c;
}	
//Tính tổng
vi operator + (vi a,vi b){
    change(a,b);
    vi c;
    int sz=a.size();
    int carry=0;
    for(int i=sz-1;i>=0;i--){
        int x=a[i]+b[i]+carry;
        carry=x/10;
        c.push_back(x);
    }
    c.push_back(carry);
    reverse(c.begin(),c.end());
    del_zero(c);
    return c;
}
//Tính hiệu
vi operator - (vi a,vi b){
    change(a,b);
    int sz=a.size();
    int carry=0;vi c;
    for(int i=sz-1;i>=0;i--){
        int x=a[i]-b[i]-carry;
        if(x<0){
            x+=10;
            carry=1;
        }
        else carry=0;
        c.push_back(x);
    }
    reverse(c.begin(),c.end());
    del_zero(c);
    return c;
}
//Tính tích
vi operator * (vi a,vi b){
    vi c(a.size()+b.size()+1);
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            c[i+j]+=a[i]*b[j];
            c[i+j+1]+=c[i+j]/10;
            c[i+j]%=10;
        }
    }
    c.push_back(0);
    for(int i=0;i<c.size()-1;i++){
        c[i+1]+=c[i]/10;
        c[i]%=10;
    }
    reverse(c.begin(),c.end());
    del_zero(c);
    return c;
}
//Tính thương
vi operator / (vi a,vi b){
    vi res;
    res.push_back(0);
    vi l,r;
    l.push_back(1);
    vi one=int_to_vi(1);
    r=a;
    while(l<=r){
        vi mid = (l + r) / 2;
        if(mid*b<=a){
            res=mid;
            l=mid+one;
        }
        else{
            r=mid-one;
        }
    }
    return res;
}
int main(){
    
    return 0;
}