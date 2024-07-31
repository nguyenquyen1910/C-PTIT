#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    multiset<int> ms;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ms.insert(a[i]);
    }
    int q;cin>>q;
    while(q--){
        int choose;cin>>choose;
        if(choose==1){
            int x;cin>>x;
            ms.insert(x);
        }
        else if(choose==2){
            int x;cin>>x;
            auto it=ms.find(x);
            if(it!=ms.end()){
                ms.erase(it);
            }
        }
        else{
            int x;cin>>x;
            auto it=ms.find(x);
            if(it==ms.end()){
                cout << "NO\n";
            }
            else cout << "YES\n";
        }
    }
    return 0;
}