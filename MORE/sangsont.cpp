#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<vector>
#include<set>
#include<map>
#include<climits>
#define e 1000000
using namespace std;
int prime[e+1];
void sieve(int n){
    for(int i=0;i<=n;i++){
            prime[i]=1;
    }
    prime[0]=prime[1]=0;
    for(int i=2;i<=sqrt(n);i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
}
int main(){
    sieve(e);
    int n;cin>>n;
    for(int i=0;i<=n;i++){
        if(prime[i]){
            cout << i << " ";
        }
    }
    return 0;
}