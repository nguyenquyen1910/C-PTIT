#include<bits/stdc++.h>
using namespace std;
struct Author{
    string name;
    string email;
    string gen;
};
struct Book{
    string name;
    int price;
    int sl;
    vector<Author> author;
};
bool cmp(Book a, Book b){
    return a.name < b.name;
}
int main(){
    int n;cin>>n;
    vector<Book> v(n);
    for(int i=0;i<n;i++){
        cin.ignore();
        string s;
        getline(cin,s);
        getline(cin,v[i].name);
        cin>>v[i].price>>v[i].sl;
        int num;cin>>num;
        v[i].author.resize(num);
        cin.ignore();
        for(int j=0;j<num;j++){
            getline(cin,v[i].author[j].name);
            getline(cin,v[i].author[j].email);
            getline(cin,v[i].author[j].gen);
        }
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout << "-----------------------\n";
        cout << "Book information :\n";
        cout << "Name : " << v[i].name << endl;
        cout << "Price : " << v[i].price << endl;
        cout << "Quantity : " << v[i].sl << endl;
        cout << "Author information :\n";
        int cnt=0;
        for(auto x : v[i].author){
            cnt++;
            cout << "#" << cnt << endl;
            cout << "Name : " << x.name << endl;
            cout << "Email : " << x.email << endl;
            cout << "Gender : " << x.gen << endl;
        }
    }
    return 0;
}