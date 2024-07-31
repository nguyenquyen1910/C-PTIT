#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
typedef struct Node* node;
//Cấp phát 1 node mới với dữ liệu là số nguyên x
node makenode(int x){
    node tmp=new Node();
    tmp->data=x;
    //Phần next luôn trỏ vào NULL
    tmp->next=NULL;
    return tmp;
}
//Kiểm tra rỗng
//Nốt đầu tiên sẽ là con trỏ NULL
bool empty(node a){
    return a==NULL;
}
//Tìm kích thước của node
int Size(node a){
    int cnt=0;
    while(a!=NULL){
        ++cnt;
        a=a->next;//Key
    }
    return cnt;
}
//Thêm 1 phần tử vào đầu danh sách liên kết
void insertfirst(node &a,int x){
    node tmp=makenode(x);
    if(a==NULL){
        a=tmp;
    }
    else{
        tmp->next=a;
        a=tmp;
    }
}
//Thêm 1 node vào cuối danh sách
void insertlast(node &a,int x){
    node tmp=makenode(x);
    if(a==NULL){
        a=tmp;
    }
    else{
        node p=a;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=tmp;
    }
}
//Thêm 1 phần tử vào giữa
void insertmid(node &a,int x,int pos){
    node tmp=makenode(x);
    int n=Size(a);
    if(pos<=0 || pos>pos+1){
        cout << "INVALID!\n";
    }
    if(n==1){
        insertfirst(a,x);
        return ;
    }
    else if(n==pos+1){
        insertlast(a,x);
    }
    else{
        node p=a;
        for(int i=1;i<pos-1;i++){
            p=p->next;
        }
        node tmp=makenode(x);
        tmp->next=p->next;
        p->next=tmp;
    }
}
//Xóa node ở đầu
void deletefirst(node &a){
    if(a==NULL)
        return;
    a=a->next;
}
//Xóa node ở cuối
void deletelast(node &a){
    if(a==NULL) return;
    node truoc=NULL,sau=a;
    while(sau->next!=NULL){
        truoc=sau;
        sau=sau->next;
    }
    if(truoc==NULL){
        a=NULL;
    }
    else{
        truoc->next=NULL;
    }
}
//Xóa node ở giữa bất kì
void deletemid(node &a,int pos){
    if(pos<=0 || pos>Size(a)) return;
    node truoc=NULL,sau=a;
    for(int i=1;i<pos;i++){
        truoc=sau;
        sau=sau->next;
    }
    if(truoc==NULL) a=a->next;
    else{
        truoc->next=sau->next;
    }
}
void sortlist(node &a){
    for(node p=a;p->next!=NULL;p=p->next){
        node min=p;
        for(node q=p->next;q!=NULL;q=q->next){
            if(q->data<min->data){
                min=q;
            }
        }
        swap(min->data,p->data);
    }
}
void printnode(node a){
    while(a!=NULL){
        cout << a->data << " ";
        a=a->next;
    }
}
int main(){
    node head=NULL;//node đầu tiên luôn là NULL
    while(1){
        cout << "--------------MENU--------------\n";
        cout << "1.Chen phan tu vao dau\n";
        cout << "2.Chen phan tu vao giua\n";
        cout << "3.Chen phan tu vao cuoi\n";
        cout << "4.Xoa phan tu vao dau\n";
        cout << "5.Xoa phan tu vao giua\n";
        cout << "6.Xoa phan tu vao cuoi\n";
        cout << "7.Duyet danh sach lien ket\n";
        cout << "8.Sap xep cac phan tu trong danh sach lien ket\n";
        cout << "0.Dung chuong trinh\n";
        cout << "Nhap lua chon cua ban\n";
        int lc;cin>>lc;
        if(lc==1){
            int x;cin>>x;
            insertfirst(head,x);
        }
        else if(lc==2){
            int x,pos;cin>>x>>pos;
            insertmid(head,x,pos);
        }
        else if(lc==3){
            int x;cin>>x;
            insertlast(head,x);
        }
        else if(lc==4){
            deletefirst(head);
        }
        else if(lc==5){
            int pos;cin>>pos;
            deletemid(head,pos);
        }
        else if(lc==6){
            deletelast(head);
        }
        else if(lc==8){
            sortlist(head);
        }
        else if(lc==0){
            return 0;
        }
        else{
            printnode(head);
            cout<<endl;
        }
    }
    return 0; 
}