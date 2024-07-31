#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
//Xây dựng cấu trúc stack bằng danh sách liên kết
typedef struct Node* node;
bool empty(node top){
    return top==NULL;
}
int getsize(node a){
    int cnt=0;
    while(a!=NULL){
        cnt++;
        a=a->next;
    }
    return cnt;
}
node makenode(int x){
    node tmp=new Node();
    tmp->data=x;
    tmp->next=NULL;
    return tmp;
}   
//Đẩy 1 phần tử vào trong ngăn xếp
void pushnode(node &top,int x){
    node tmp=makenode(x);
    if(top==NULL){
        top=tmp;
    }
    else{
        tmp->next=top;
        top=tmp;
    }
}
//Đẩy 1 phần tử ra khỏi ngăn xếp
void popnode(node &top){
    if(top==NULL) return ;
    top=top->next;
}
//Lấy dữ liệu của node
int gettop(node top){
    return top->data;
}
int main(){
    node top=NULL;
    long long n;cin>>n;
    while(n!=0){
        int r=n%2;
        pushnode(top,r);
        n/=2;
    }
    while(!empty(top)){
        cout << gettop(top);
        popnode(top);
    }
    return 0;
}