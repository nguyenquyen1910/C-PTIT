#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        double x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        double a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        double b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
        double c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
        if(a+b<=c || a+c<=b || b+c<=a) cout << "INVALID\n";
        else{
            double s=sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
            cout << fixed << setprecision(3) << (double)((a*b*c/(4*s))*(a*b*c/(4*s))*PI) << endl;
        }
    }
    return 0;
}