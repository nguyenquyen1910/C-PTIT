#include<iostream>
#include<deque>
#include<set>
using namespace std;
//Double end queue
//size()
//push(pop)_front: đẩy(xóa) vào đầu
//push(pop)_back(): đẩy(xóa) vào cuối
//empty()
//back():lấy phần tử ở cuối
//front():lấy phần tử ở đầu
//Ứng dụng để tìm max của sling window
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int &x : a) cin>>x;
    //Cach 1: Duyet trau
    for(int i=0;i<=n-k;i++){
        int tmp=INT_MIN;
        for(int j=0;j<k;j++){
            tmp=max(tmp,a[i+j]);
        }
        cout << tmp << " ";
    }
    //Cach 2: mutilset
    multiset<int> ms;
    for(int i=0;i<k;i++){
        ms.insert(a[i]);
    }
    for(int i=k;i<n;i++){
        cout << *ms.rbegin() << " ";
        ms.erase(ms.find(a[i-k]));
        ms.insert(a[i]);
    }
    cout << *ms.rbegin();
    //Cach 3: Deque
    deque<int> dq;
    for(int i=0;i<k;i++){
        while(!dq.empty() && a[i] > a[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout << a[dq.front()] << " ";
    for(int i=k;i<n;i++){
        if(dq.front() <= i-k){
            dq.pop_front();
        }
        while(!dq.empty() && a[i] > a[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
        cout << a[dq.front()] << " ";
    }
    return 0;
}