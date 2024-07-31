#include <iostream>
#include <vector>
using namespace std;
int matrixrank(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int rank = 0;
    for (int i = 0; i < n; i++) {
        bool check = false;
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != 0) {
                check = true;
                break;
            }
        }
        if(check){
            rank++;
            int pivot = 0;
            while(pivot<m && matrix[i][pivot]==0) {
                pivot++;
            }

            for(int j=i+1;j<n;j++) {
                int fac = matrix[j][pivot]/matrix[i][pivot];
                for(int k=pivot;k<m;k++) {
                    matrix[j][k] -= fac*matrix[i][k];
                }
            }
        }
    }
    return rank;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<vector<int>> matrix(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>matrix[i][j];
            }
        }
        cout << matrixrank(matrix) << endl;
    }
    return 0;
}