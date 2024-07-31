#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int min2=INT_MAX;
        bool check=false;
        for(int i=0;i<n;i++){
            if(a[i]<min2 && a[i]>*min_element(a,a+n)){
                min2=a[i];
                check=true;
            }
        }
        if(check) cout << *min_element(a,a+n) << " " << min2;
        else cout << -1;
        cout << endl;
    }
    return 0;
}