#include<bits/stdc++.h>
using namespace std;
class MucLuc{
    public:
        string name;
        int page,level;
        MucLuc(){
            name="";
            page=level=0;
        }
        friend ostream& operator << (ostream& out,MucLuc a){
            for(int i=0;i<a.level;i++){
                out << ">";
            }
            out << a.name << "--- " << a.page << endl;
            return out;
        }
};
bool CheckPage(string s){
    return s.find("Page")!=string::npos;
}
bool CheckLevel(string s){
    return (s.find("Level")!=string::npos);
}
int main(){
    ifstream fi;
    fi.open("vanban.in",ios_base::in);
    string s;
    MucLuc a[1000];
    int cnt=0,id;
    while(getline(fi,s)){
        if(CheckPage(s)){
            id=s[5]-'0';
        }
        else if(CheckLevel(s)){
            a[cnt].page=id;
            a[cnt].level=s[5]-'0';
            string topic="";
            for(int i=8;i<s.size();i++){
                topic+=s[i];
            }
            a[cnt].name=topic;
            cnt++;
        }
    }
    fi.close();
    for(int i=0;i<cnt;i++){
        cout << a[i];
    }
    return 0;
}