#include<bits/stdc++.h>
using namespace std;
int a[100],n,k,ok;
vector<int> a1;
//Liet ke to hop theo phuong phap sinh 
void ktao1(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh1(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		--i;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}

//Liet ke to hop Toan roi rac(Theo cach de quy) 

void ThDQ(int m){
	if(m>k){
		for(int i=1;i<=k;i++){
			cout << a[i];
		}
		cout << " ";
		return ;
	}
	for(int i=a[m-1]+1;i<=n-k+m;i++){
		a[m]=i;
		ThDQ(m+1);
	}
}

//Liet Ke Hoan Vi (theo phuong phap sinh)

void ktao2(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
void sinh2(){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]){
		--i;
	}
	if(i==0){
		ok=0;
	}
	else{
		int j=n;
		while(a[i]>a[j]) --j;
		swap(a[i],a[j]);
		int l=i+1,r=n;
		while(l<r){
			swap(a[l],a[r]);
			++l;--r;
		}
	}
} 

//Liet Ke Hoan Vi(theo cach de quy)

void ThDQ2(int m){
	if(m==n){
		for(int i=0;i<n;i++){
			cout << a[i];
		}
		cout << " ";
		return ;
	}
	for(int i=1;i<=n;i++){
		bool check=false;
		for(int j=0;j<m;j++){
			if(a[j]==i){
				check=true;
				break;
			}
		}
		if(!check){
			a[m]=i;
			ThDQ2(m+1);
		}
	}
} 

//Liet ke xau nhi phan co do dai n theo phuong phap sinh

void ktao3(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sinh3(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]=1;
	}
}

//Liet ke xau nhi phan theo phuong phap de quy

void dequy(int n,string s){
	if(n==0){
		cout << s;
		cout << " ";
		return;
	}
	dequy(n-1,s+"0");
	dequy(n-1,s+"1");
}

int main(){
	cin>>n;
	dequy(n,"");
	return 0;
}
