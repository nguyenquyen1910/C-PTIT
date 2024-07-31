#include<bits/stdc++.h>
using namespace std;
//class
//Thuộc tính : attribute
//Phương thức : method
//object : Đối tượng
//-Encapsulation : Đóng gói
// Access modifier : 
// -public
// -private
// -protected
//Constructor : Ham khoi tao
//Desstructor : Ham huy
//this poiter : con tro this
//Setter getter : muốn lấy về các thuộc tính dùng get, muốn chỉnh sửa thì dùng set
//Static : đến mã sinh viên tự tăng(Sv001->SV002->...)
//Friend function,friend class
//Operator overloading
// << >>    
class SinhVien{
    //Thuộc tính và phương thức có thể thuộc 1 trong 3 access modifier
    //Thuộc tính để private, phương thức để public
    //Nếu không định dạnh modifier thì sẽ mặc định là private
    private:
        string id,name,ns;
        float gpa;
        static int dem;//tăng đếm(Lưu ý phải gán biến đếm bên ngoài)
    public:
        void nhap();
        void in();
        float getgpa();
        void setgpa(float);
        void tangdem();
        int getdem();
        friend void inthongtin(SinhVien);//Friend function
        friend void chuanhoa(SinhVien&);
        //Toán tử nhập xuất bắt buộc sử dụng friend
        friend istream& operator >> (istream&,SinhVien&);
        friend ostream& operator << (ostream&,SinhVien);
        friend bool operator < (SinhVien,SinhVien);
}; 
//Implementation
void SinhVien::nhap(){
    ++dem;
    this->id="SV"+string(3-to_string(dem).size(),'0')+to_string(dem);
    getline(cin,this->name);
    cin>>this->ns;
    cin>>this->gpa;
}
//Hàm lấy điểm gpa
float SinhVien::getgpa(){
    return this->gpa;
}
//Hàm lấy thông tin gpa để sửa
void SinhVien::setgpa(float gpa){
    this->gpa=gpa;
}
//Hàm sắp xếp sinh viên theo gpa
bool cmp(SinhVien a,SinhVien b){
    return a.getgpa()>b.getgpa();
}
//Hàm in sinh viên
void SinhVien::in(){
    cout << this->id << " " << this->name << " " << this->ns << " " << fixed << setprecision(2) << this->gpa << endl;
}
//Gán biến đếm ban đầu bằng 0
int SinhVien::dem=0;
//Hàm tăng biến đếm
void SinhVien::tangdem(){
    ++dem;
}
//Hàm lấy thông tin biến đếm để sử dụng
int SinhVien::getdem(){
    return this->dem;
}
//Hàm bạn: có thể truy cập vào các thuộc tính private 1 cách thoải mái
void inthongtin(SinhVien a){
    cout << a.id << " ";
}
//Hàm chuẩn hóa tên của sinh viên
void chuanhoa(SinhVien &a){
    string res="";
    stringstream ss(a.name);
    string token;
    while(ss >> token){
        res+=toupper(token[0]);
        for(int i=1;i<token.size();i++){
            res+=tolower(token[i]);
        } 
        res+=" ";
    }
    res.erase(res.size()-1);
    a.name=res;
}
//Hàm nạp chồng toán tử >> << (cin=in,cout=out)
istream& operator >> (istream &in,SinhVien &a){
    getline(in,a.name);
    in>>a.ns>>a.gpa;
    return in;
}
ostream& operator << (ostream &out,SinhVien a){
    out << a.id << " " << a.name << " " << a.ns << " " << a.gpa;
    return out;
}
//Hàm nạp chồng toán tử nhỏ hơn < (Lưu ý khi sort thì sẽ sort theo tiêu chí này)
bool operator < (SinhVien a,SinhVien b){
    return a.gpa < b.gpa;
}
int main(){
    int n;cin>>n;
    SinhVien a[n];
    for(int i=0;i<n;i++){
        cin.ignore();
        a[i].nhap();
    }
    for(int i=0;i<n;i++){
        a[i].in();
    }
    return 0;
}