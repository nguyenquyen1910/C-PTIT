#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s; // Số lượng vật phẩm (n) và sức chứa của túi (s)
    cin >> n >> s;
    int w[n+1], v[n+1]; // Mảng lưu trữ trọng lượng (w) và giá trị (v) của từng vật phẩm
    for(int i=1; i<=n; i++) cin >> w[i]; // Nhập trọng lượng của các vật phẩm
    for(int i=1; i<=n; i++) cin >> v[i]; // Nhập giá trị của các vật phẩm

    int dp[n+1][s+1]; // Mảng dp để lưu trữ giá trị tối ưu cho từng trường hợp con
    memset(dp, 0, sizeof(dp)); // Khởi tạo mảng dp với giá trị ban đầu là 0

    for(int i=1; i<=n; i++){
        for(int j=1; j<=s; j++){
            // Không lựa chọn đồ vật thứ i vào túi
            dp[i][j] = dp[i-1][j];
            // Có thể đưa đồ vật thứ i vào túi
            if(j >= w[i]){
                dp[i][j] = max(dp[i][j], dp[i-1][j - w[i]] + v[i]);
            }
        }
    }

    cout << dp[n][s] << endl; // In ra giá trị tối ưu lớn nhất có thể đạt được
    return 0;
}
