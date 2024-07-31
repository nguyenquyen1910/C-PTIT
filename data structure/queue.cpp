#include<iostream>
#include<queue>
#include<cstring>
#include<algorithm>
#include<set>
#define ms(s,n) memset(s,n,sizeof(s))
using namespace std;
using ll = long long;
//FIFO
//O(1)
//push
//pop
//empty
//size
//front
//Ứng dụng liệt kê tất cả các số nhị phân từ 1 đến n
vector<string> res;
void init(){
    queue<string> q;
    q.push("1");
    res.push_back("1");
    while(res.size()<10000){
        string top=q.front();
        q.pop();
        res.push_back(top+"0");
        res.push_back(top+"1");
        q.push(top+"0");
        q.push(top+"1");
    }
}
//Bội số chia hểt cho n chỉ chứa 0 và 9
vector<ll> res2;
ll ans[101];
void init2(){
    queue<string> q2;
    q2.push("9");
    res2.push_back(9);
    while(true){
        string top=q2.front();
        q2.pop();
        if(top.length()==11) break;
        res2.push_back(stoll(top+"0"));
        res2.push_back(stoll(top+"9"));
        q2.push(top+"0");
        q2.push(top+"9");
    }
    for(int i=1;i<101;i++){
        for(ll x : res2){
            if(x%i==0){
                ans[i]=x;
                break;
            }
        }
    }
}
//Số lộc phát
vector<string> res3;
void init3(){
    queue<string> q3;
    q3.push("6");
    q3.push("8");
    res.push_back("6");
    res.push_back("8");
    while(true){
        string top=q3.front();
        q3.pop();
        if(top.length()==15) break;
        res3.push_back(top+"6");
        res3.push_back(top+"8");
        q3.push("6");
        q3.push("8");
    }
}
//Đếm số bước để biến số s thành số t cho trước
int solve(int s,int t){
    queue<pair<int,int>> q;
    set<int> se;
    se.insert(s);
    q.push({s,0});
    while(!q.empty()){
        pair<int,int> top=q.front();q.pop();
        if(top.first==t) return top.second;
        if(top.first*2==t || top.first-1==t) return top.second+1;
        if(se.find(top.first*2)==se.end() && top.first < t){
            q.push({top.first*2,top.second+1});
            se.insert(top.first*2);
        } 
        if(se.find(top.first-1)==se.end() && top.first > 1){
            q.push({top.first-1,top.second+1});
            se.insert(top.first-1);
        }
    }
}
//Đường đi ngắn nhất trên lưới
int a[1000][1000];
int d[1000][1000];//d[i][j] lưu số bước đi tối thiểu để đến đích
pair<int,int> s,e;
int n,m;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void input(){
    cin>>n>>m>>s.first>>s.second>>e.first>>e.second;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ms(d,0);
}
int init4(){
    queue<pair<int,int>> q;
    q.push({s.first,s.second});
    d[s.first][s.second]=0;
    while(!q.empty()){
        pair<int,int> top=q.front();q.pop();
        int i=top.first;
        int j=top.second;
        for(int k=0;k<4;k++){
            int i1=i+dx[k];
            int j1=j+dy[k];
            if(a[i1][j1] && i1>=0 && i1<n && j1>=0 && j1<m){
                if(i1==e.first && j1==e.second){
                    return d[i][j]+1;
                }
                q.push({i1,j1});
                d[i1][j1]=d[i][j]+1;
            }
        }
    }
    return -1;
}
int main(){
    input();
    if(a[s.first][s.second] && a[e.first][e.second]){
        cout << init4();
    }
    else cout << "-1";
    return 0;
}   