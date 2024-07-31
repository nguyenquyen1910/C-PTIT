// Lưu các mảng 
// -> Sắp xếp, so sánh các mảng khác nhau
// Độ phức tạp O(logn)
#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
    set<int> s;
    // Insert
    for(int i=0;i<10;i++){
        s.insert(i);
    }
    // Erase -> Xóa phần tử của set => s.erase(i); Có thể thông qua giá trị hoặc iterator(  -s.erase(s.find(5))-  )
    s.erase(s.find(5));
    // Tìm size của set
    cout << s.size();
    // Sử dụng s.count() để tìm phần tử trong mảng
    if(s.count(5)){
        cout << "FOUND !\n";
    }
    else cout << "NOT FOUND !\n";
    // Tương tự với find nhưng điều kiện là khác s.end()

    // Dùng for each để duyệt qua set
    for(int x : s){
        cout << x << "  ";
    }
    cout << endl;
    // Set cũng có s.begin() và s.end()
    cout << *s.begin();
    cout << *s.rbegin();
    // Nhập vào một mảng sau đó lưu vào set
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s.insert(x);
    }
    //Ứng dụng tìm các từ khác nhau trong string
    // int n;cin>>n;
    // set<string> s;
    // cin.ignore();
    // for(int i=0;i<n;i++){
    //     string str;
    //     getline(cin,str);
    //     s.insert(str);
    // }
    // for(auto x : s){
    //     cout << x << "  ";
    // }
    //Sử dụng multiset để lưu các phần tử có giá trị giống nhau
    multiset<int> ms;
    // Chú ý nếu dùng ms.erase(i) thì nó sẽ xóa tất cả các phần tử có giá trị i
    //Ứng dụng multiset để tìm số lớn nhất nhỏ nhất trong một đoạn có chiều dài k cố định
    int n,k;cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    multiset<int> ms;
    for(int i=0;i<k;i++){
        ms.insert(a[i]);
    }
    for(int i=k;i<n;i++){
        cout << *ms.rbegin() << "  ";
        ms.erase(ms.find(a[i-k]));
        ms.insert(a[i]);
    }
    cout << *ms.rbegin() << endl; 
    //Unordered_set -> Lưu nhưng không sắp xếp từ bé đến lớn nữa
    return 0;
}