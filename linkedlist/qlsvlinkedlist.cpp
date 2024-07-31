#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string id,name;
    double gpa;
};
struct SV{
    SinhVien data;
    SV *next;
};
typedef struct SV* sv;
sv makenode(){
    SinhVien s;
    cin>>s.id;
    cin.ignore();
    getline(cin,s.name);
    cin>>s.gpa;
    sv tmp=new SV();
    tmp->data=s;
    tmp->next=NULL;
    return tmp;
}
bool checkempty(sv a){
    return a==NULL;
}
int SizeSV(sv a){
    int cnt=0;
    while(a!=NULL){
        cnt++;
        a=a->next;
    }
    return cnt;
}
void insertfirst(sv &a){
    sv tmp=makenode();
    if(a==NULL){
        a=tmp;
    }
    else{
        tmp->next=a;
        a=tmp;
    }
}
void insertlast(sv &a){
    sv tmp=makenode();
    if(a==NULL){
        a=tmp;
    }
    else{
        sv p=a;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=tmp;
    }
}
void insertmid(sv &a,int pos){
    sv tmp=makenode();
    int n=SizeSV(a);
    if(pos<=0 || pos>n+1){
        cout << "INVALID!\n";
    }
    if(n==1){
        insertfirst(a);
        return ;
    }
    else if(n==pos+1){
        insertlast(a);
    }
    else{
        sv p=a;
        for(int i=1;i<pos-1;i++){
            p=p->next;
        }
        sv tmp=makenode();
        tmp->next=p->next;
        p->next=tmp;
    }
}
void sortgpa(sv &a){
    for(sv p=a;p->next!=NULL;p=p->next){
        sv min=p;
        for(sv q=p->next;q!=NULL;q=q->next){
            if(q->data.gpa<min->data.gpa){
                min=q;
            }
        }
        swap(p->data,min->data);
    }
}
void printsv(SinhVien s){
    cout << "ID: " << s.id << endl;
    cout << "FULL NAME: " << s.name << endl;
    cout << "GPA: " << fixed << setprecision(2) << s.gpa << endl;
}
void printlist(sv a){
    while(a!=NULL){
        printsv(a->data);
        a=a->next;
    }
}
int main(){
    sv head=NULL;
    while(1){
        cout << "1.Them 1 sinh vien o dau\n";
        cout << "2.Them 1 sinh vien o giua\n";
        cout << "3.Them 1 sinh vien o cuoi\n";
        cout << "4.Sap xep sinh vien theo gpa\n";
        cout << "5.In danh sach sinh vien\n";
        cout << "0.Thoat chuong trinh\n";
        cout << "Nhap lua chon:\n";
        int lc;cin>>lc;
        if(lc==1){
            insertfirst(head);
        }
        else if(lc==2){
            int pos;cin>>pos;
            insertmid(head,pos);
        }
        else if(lc==3){
            insertlast(head);
        }
        else if(lc==4){
            sortgpa(head);
        }
        else if(lc==5){
            printlist(head);
        }
        else{
            break;
        }
    }
    return 0;
}