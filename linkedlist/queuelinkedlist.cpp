#include<bits/stdc++.h>
using namespace std;
//Xây dưng cấu trúc hàng đợi bằng node
struct Node{
    int data;
    Node *next;
};
//Lưu ý phần tử đầu ở hàng đợi nằm ở cuối node và phần tử cuối của hàng đợi nằm ở đầu node
typedef struct Node* node;
bool empty(node back){
    return back==NULL;
}
int getsize(node back){
    int cnt=0;
    while(back!=NULL){
        cnt++;
        back=back->next;
    }
    return cnt;
}
node makenode(int x){
    node tmp=new Node();
    tmp->data=x;
    tmp->next=NULL;
    return tmp;
}
//PUSH: đẩy 1 phần tử vào cuối hàng đợi
void push(node &back,int x){
    node tmp=makenode(x);
    tmp->next=back;
    back=tmp;
}
//POP: đẩy 1 phần từ ra đầu hàng đợi
void pop(node &back){
    node truoc=NULL,sau=back;
    while(sau->next!=NULL){
        truoc=sau;
        sau=sau->next;
    }
    if(truoc==NULL){
        back=NULL;
    }
    else{
        truoc->next=NULL;
    }
}
int front(node back){
    while(back->next!=NULL){
        back=back->next;
    }
    return back->data;
}
int main(){
    //Ví dụ sinh ra số lộc phát bé hơn 9 chữ số
    node back=NULL;
    push(back,6);
    push(back,8);
    vector<int> v;
    while(1){
        int top=front(back);pop(back);
        string s=to_string(top);
        if(s.size()==9) break;
        v.push_back(top);
        push(back,top*10+6);
        push(back,top*10+8);
    }
    for(int x : v){
        cout << x << " ";
    }
    return 0;
}