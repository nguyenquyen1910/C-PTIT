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
using namespace std;
//Hàm bổ trợ cho stable_sort
bool cmp(int a,int b){
    return abs(a)<abs(b);
}
int main(){
    int a[5]={1,2,3,4,5};
    vector<int> b = {1,2,3,4,5};
//min,max
    cout << min({1,2,3,4}) << max({1,2,3,4});
//min_element,max_element
    cout << *min_element(a,a+5) << *max_element(a,a+5);
    //Vector
    cout << *min_element(begin(b),end(b));
//accumulate() -> Tính tổng các phần tử trong mảng hoặc vector
    // cout << accumulate(a, a + 5, 0);//duyệt từ chỉ số 0 đến chỉ số 5; số 0 là giá trị ban đầu của nó
//Hàm hoán đổi 2 phần tử
    int x=100,y=200;
    swap(x,y);
//Hàm sắp xếp mảng vector,có thể áp dụng cho string(tăng dần theo thứ tự từ điển)
    sort(a,a+5);//Tăng dần
    sort(a,a+5,greater<int>());//Giảm dần
    //Vector
    sort(begin(b),end(b));
//Hàm sắp xếp có tỉnh ổn định(có cùng tiêu chí sắp xếp nhưng vẫn giữ tính thứ tự)...
    stable_sort(a,a+5,cmp); 
    //Vector
    stable_sort(begin(b),end(b),cmp); 
//Hàm tìm kiếm find->trả về con trỏ hoặc iterator(độ phức tạp O(n))
    auto it = find(a,a+5,3);// Duyệt từ chỉ số 0 đến chỉ số 5 và tìm kiếm giá trị 3
    if(it==a+5){
        cout << "NOT FOUND!";
    }
    else cout << "FOUND!";
    //Vector
    auto it1 = find(begin(b),end(b),2);
    if(it1==end(b)) cout << "NOT FOUND!";
    else cout << "FOUND!"; 
//Hàm tìm kiếm nhị phân(chỉ áp dụng cho mảng,vector,set,map đã được sắp xếp)
    if(binary_search(a,a+5,4)) cout << "FOUND!";
    else cout << "NOT FOUND";
//Hàm tìm kiếm lower_bound sẽ tìm kiếm vị trí đầu tiên lớn hơn hoặc bằng x trong mảng
//Hàm upper_bound sẽ tìm kiếm vị trí đầu tiên lớn hơn x trong mảng
//Nếu không tìm thây sẽ trả về vị trí cuối cùng trong mảng
    auto it2 = lower_bound(a,a+5,2);
    cout << *it2;
//Memset: gán tất cả giá trị cho mảng a có giá trị bằng 0 hoặc -1
    memset(a,0,sizeof(a));
//fill: gán giá trị cho mảng hoặc vector bằng 1 giá trị nào đó
    vector<int> b1={1,2,3,4,5};
    fill(begin(a),end(a),1000);//Gán tất cả giá trị của mảng thành 1000
//Hàm merge trộn 2 vector hoặc 2 mảng 
    vector<int> v1={1,2,3,6,7,10};
    vector<int> v2={1,1,3,6,7};
    vector<int> res(11);
    merge(begin(a),end(a),begin(b),end(b),begin(res));
    for(auto it : res) cout << it << " ";
    //Lưu ý chỉ áp dụng với mảng và vector đã được sắp xếp
//Hàm lật mảng hoặc vector
    string s = "Miahn";
    reverse(begin(s),end(s));
    cout << s;
//4 thao tác của tập hợp (nhưng cần phải sort trước)
//set_union để tìm hợp
    int a1[5]={1,2,5,6,8};
    int a2[4]={1,3,4,7};
    vector<int> u(9);
    auto it3 = set_union(a1,a1+5,a2,a2+4,begin(u));
    u.resize(it3-begin(u));
    for(int x : u) cout << x << " ";
//set_intersection : giao
    auto it4 = set_intersection(a1,a1+5,a2,a2+4,begin(u));
    u.resize(it4-begin(u));
    for(int x : u) cout << x << " ";
//set_difference: các phần tử thuộc mảng thứ 1 mà không thuộc mảng thứ 2
    auto it5 = set_difference(a1,a1+5,a2,a2+4,begin(u));
    u.resize(it5-begin(u));
    for(int x : u) cout << x << " ";
//set_symmetric_difference: các phần tử thuộc mảng 2 mà không thuộc mảng 1
    auto it6 = set_difference(a1,a1+5,a2,a2+4,begin(u));
    u.resize(it6-begin(u));
    for(int x : u) cout << x << " ";
    return 0;   
}