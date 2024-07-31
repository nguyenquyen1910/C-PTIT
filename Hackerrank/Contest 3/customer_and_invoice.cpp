#include<bits/stdc++.h>
using namespace std;
class Customer{
    public:
        int id;
        string name;
        int dc;
        double am;
};
class Invoice{
    public:
        int idx;
        Customer customer;
        double amount;
};
bool cmp(Invoice a, Invoice b){
    if(a.amount!=b.amount)
        return a.amount>b.amount;
    return a.customer.id<b.customer.id;
}
int main(){
    int n;cin>>n;
    Invoice a[n+5];
    for(int i=0;i<n;i++){
        string tmp;cin>>tmp;
        cin.ignore();
        getline(cin,tmp);
        tmp.erase(0,13);
        a[i].customer.id=stoi(tmp);
        getline(cin,a[i].customer.name);
        a[i].customer.name.erase(0,12);
        getline(cin,tmp);
        tmp.erase(0,10);
        a[i].customer.dc=stoi(tmp);
        getline(cin,tmp);
        tmp.erase(0,12);
        a[i].idx=stoi(tmp);
        getline(cin, tmp);
		tmp.erase(0, 8);
		a[i].customer.am = stod(tmp);
        a[i].amount = a[i].customer.am * ((100-a[i].customer.dc) * 0.01);
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){ 
        cout << "Customer ID : " << a[i].customer.id << endl;
        cout << "Full Name : " << a[i].customer.name << endl;
        cout << "Amount : " << fixed << setprecision(2) << a[i].amount << " $" << endl;
        cout << "--------------------\n";
    }
    return 0;
}