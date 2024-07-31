#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; // Số lượng thành phố
    cin >> n;
    vector<vector<int>> graph(n, vector<int>(n));
    // Nhập ma trận trọng số của đồ thị
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }
    int startCity = 0; // Thành phố xuất phát (thường là thành phố 0)
    int minCost = INT_MIN;
    vector<int> bestPath;
    // Tạo danh sách các thành phố từ 0 đến n-1
    vector<int> cities(n);
    for (int i = 0; i < n; i++) {
        cities[i] = i;
    }
    do {
        int currentCost = 0;
        for (int i = 0; i < n - 1; i++) {
            currentCost += graph[cities[i]][cities[i + 1]];
        }
        currentCost += graph[cities[n - 1]][startCity];
        if (currentCost < minCost) {
            minCost = currentCost;
            bestPath = cities;
        }
    } while (next_permutation(cities.begin() + 1, cities.end()));
    cout << "Chi phí nhỏ nhất: " << minCost << endl;
    cout << "Hành trình: ";
    for (int city : bestPath) {
        cout << city << " -> ";
    }
    cout << startCity << endl;
    return 0;
}
