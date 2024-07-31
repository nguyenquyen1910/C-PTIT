#include<bits/stdc++.h>
using namespace std;
struct ThuanNghich{
    string so;
    int cnt;
};
bool checktn(string &s){
    if(s.size()<2){
        return false;
    }
    int l=0,r=s.size()-1;
    while(l<=r){
        if(s[l]!=s[r]){
            return false;
        }
        ++l;--r;
    }
    return true;
}
bool cmp(ThuanNghich a,ThuanNghich b){
    if(a.so.size()==b.so.size()){
        return a.so>b.so;
    }
    return a.so.size()>b.so.size();
}
int main(){
    ThuanNghich a[10000];
    char N[1000];
	int g = 0;
	while(scanf("%s", &N) != EOF){
		for (int j=0;j<strlen(N);j++) a[g].so.push_back(N[j]);
		g++;
	}
    for(int i=0;i<g;i++){
        for(int j=0;j<g;j++){
            if(a[i].so==a[j].so) a[i].cnt++;
        }
    }
    sort(a,a+g,cmp);
    for(int i=0;i<g;i++){
        int x=0;
        for(int j=0;j<i;j++) {
            if(a[i].so==a[j].so) x++;
        }
        if(x>0) continue;
        else{
            if(checktn(a[i].so)){
                cout << a[i].so <<  " " << a[i].cnt << endl;
            }
        }
    }
    return 0;
}