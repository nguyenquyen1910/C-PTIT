#include<bits/stdc++.h>
using namespace std;
//base class(class cha)
//derived class(class con)
class Person{
    private:
        string name,add;
    public:
        void nhap(){
            getline(cin,name);
            getline(cin,add);
        }
        string getname(){
            return name;
        }
        string getadd(){
            return add;
        }
        void setname(string name){
            this->name=name;
        }
        void setadd(string add){
            this->add=add;
        }
        void in(){
            cout << name << " " << add << " ";
        }
};
//Cú pháp
class Student : public Person{
    private:
        float gpa;
    public:
        //Ghi đè hàm(function overriding)
        void nhap(){
            Person::nhap();//Tương tụ cho hàm nhập
            cin>>gpa;
        }
        float getgpa(){
            return gpa;
        }
        void setgpa(float gpa){
            this->gpa=gpa;
        }
        //Ghi đè hàm(function overriding)
        void in(){
            Person::in();//Gọi bằng cách này
            cout << fixed << setprecision(2) << gpa;
        }
};
//Student sẽ có tất cả thuộc tính của Person và có thêm cả thuộc tính của Student
//Lưu ý trong class Student không thể in ra các thuộc tính thuộc private của Person
int main(){
    Student s;
    s.nhap();
    s.in();
    return 0;
}