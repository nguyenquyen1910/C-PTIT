#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        map<int,int> mp;
        int max_num=INT_MIN;
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
            max_num=max(max_num,a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]==max_num){
                cout << "_ ";
            }
            else{
                for(int j=a[i]+1;j<=max_num;j++){
                    if(mp[j]>0){
                        cout << j << " ";
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}