#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        if (a.size() < b.size()) swap(a, b);
        while (a.size() != b.size()) b = "0" + b;
        int nho=0;
        string c;
        for(int i=a.size()-1;i>=0;i--){
            int x=a[i]-'0'+b[i]-'0'+nho;
            nho=x/10;
            int x1=x%10;
            c.push_back(x1+'0');
        }
        if(nho>0) c.push_back(nho+'0');
        reverse(c.begin(),c.end());
        cout << c << endl;
    }
    return 0;
}