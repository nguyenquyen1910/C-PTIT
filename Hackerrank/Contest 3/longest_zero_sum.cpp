#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,int> mp;
    mp[0]=-1;
    int sum=0,len=0,bg=-1;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(mp.find(sum)!=mp.end()){
            if(len<i-mp[sum]){
                len=i-mp[sum];
                bg=mp[sum]+1;
            }
        }
        else{
            mp[sum]=i;
        }
    }
    if(bg==-1){
        cout << "NOT FOUND\n";
    }
    else{
        for(int i=bg;i<bg+len;i++){
            cout << a[i] << " ";
        }
    }
    return 0;
}