#include<iostream>
#include<map>
//Hỗ trợ tìm kiếm với độ phức tạp O(logn) với key
using namespace std;
//(key,value)
//Insert
//for(auto...)...
//Count, find(tìm kiếm)
//erase(xóa)

int main(){
//Khai bao map <datatype1,datatype2> mp -> (key,value)
//Key không được trùng nhau còn value thì có
    map<int,int> mp;
    mp[100]=200;//(100,200)-> (first,second)
    mp[200]=300;//(200,300)
//Có thể sử dụng insert như pair để thêm vào trong map VD:
    mp.insert({300,400});
    mp.insert({400,500});
// 3 cách duyệt map
    // 1.auto (ưu dùng)
    for(auto x : mp){
        cout << x.first << " " << x.second << " ";
    }
    // 2.pair
    for(pair<int,int> p : mp){
        cout << p.first << " " << p.second << " ";
    } 
    // 3.iterator
    for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++){
        cout << (*it).first << " " << (*it).second << " ";
    }
    //Sử dụng count hoặc find để tìm kiếm giống như set
    if(mp.count(100)){
        cout << "FOUND !\n"; 
    }
    else cout << "NOT FOUND !\n";
    // Cũng có chức năng erase như set VD:
    mp.erase(100);
//Ứng dụng vào bài toán đếm tần suất xuất hiện của phần tử trong mảng(các phần tử trong map cũng sắp xếp tăng dần theo Key)
    map<int,int> mp;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }
    for(auto it : mp){
        cout << it.first <<" "<< it.second <<endl;
    }
//Ứng dụng trong đếm từ của chuỗi
    map<string,int> mp1;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string tmp;cin>>tmp;
        mp1[tmp]++;
    }
    int max=0;
    string res;
    for(auto it:mp){
        //với câu lệch if như thế này sẽ in ra từ có thứ tự từ điển nhỏ hơn
        if(it.second>max){
            max=it.second;
            res=it.first;
        }
        //với câu lệch if như thế này sẽ in ra từ có thứ tự từ điển lớn hơn
        if(it.second>=max){
            max=it.second;
            res=it.first;
        }
    }
    cout << res << " " << max;
    return 0;
}
