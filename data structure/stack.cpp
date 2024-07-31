#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
//LIFO
int main(){
//Khai báo
    stack<int> st;
//Thêm phần tử vào stack
    st.push(1);
    st.push(2);
    st.push(3);
//Kích thước stack
    cout << st.size() << endl;
//Phần tử mới nhất của stack
    cout << st.top() << endl;
//Xóa phần tử trên cùng ra khỏi stack
    st.pop();
    cout << st.top() << endl;
    if(st.empty()){
        cout << "Empty !" << endl;
    }
    else cout << "NO !" << endl;
//Ứng dụng để chuyển qua hệ nhị phân
    int n;cin>>n;
    while(n!=0){
        st.push(n%2);
        n/=2;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
//Ứng dụng để tìm ngoặc hợp lệ
    string s;cin>>s;
    stack<char> st1;
    for(auto x : s){
        if(x=='('){
            st1.push(x);
        }
        else{
            if(st1.empty()){
                cout << "INVALID\n";
                return 0;
            }
            else{
                st1.pop();
            }
        }
    }
    if(st1.empty()){
        cout << "VALID\n";
    }
    else cout << "INVALID\n";
//Ứng dụng tìm phần tử lớn hơn ngay sau nó
    int m;cin>>m;
    int b[m],c[m];
    for(int &x : b) cin>>x;
    stack<int> st2;
    for(int i=0;i<m;i++){
        if(st2.empty()){
            st2.push(i);
        }
        else{
            while(!st2.empty() && b[st2.top()]<b[i]){
                c[st2.top()]=b[i];
                st2.pop();
            }
            st2.push(i);
        }
    }
    while(!st2.empty()){
        c[st2.top()]=-1;
        st2.pop();
    }   
    for(int x : c){
        cout << x << " ";
    }
//Ứng dụng tìm diện tích hình chữ nhật lớn nhất trong biểu đồ
    int n1;cin>>n1;
    int a1[n1],b1[n1];
    for(int &x : a1) cin>>x;
    stack<int> st3;
    int res=INT_MIN;
    int i=0;
    while(i<n1){
        if(st3.empty() || a1[i]>=a1[st3.top()]){
            st3.push(i);
            ++i;
        }
        else{
            int idx=st3.top();
            st3.pop();
            if(st3.empty()){
                res=max(res,i*a1[idx]);
            }
            else{
                res=max(res,a1[idx]*(i-st3.top()-1));
            }
        }
    }
    while(!st3.empty()){
        int idx=st3.top();
        st3.pop();
        if(st3.empty()){
            res=max(res,i*a1[idx]);
        }
        else{
            res=max(res,a1[idx]*(i-st3.top()-1));
        }
    }
    cout << res;
    return 0;
}