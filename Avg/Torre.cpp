#include<bits/stdc++.h>
// https://neps.academy/br/exercise/45

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, r = INT32_MIN;
    cin >> N;

    vector<vector<int>> vt (N+1, vector<int> (N+1, 0)); // matriz de soma de prefixo 2D
    vector<vector<int>> ar (N+1, vector<int> (N+1, 0));
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++){
            cin >> vt[i][j];
            ar[i][j] = vt[i][j];
            vt[i][j] += vt[i-1][j];
            vt[i][j] += vt[i][j-1];
            vt[i][j] -= vt[i-1][j-1];
        }

    for(int i = 1; i <= N; i++){
        int vl = vt[i][N] - vt[i-1][N];
        for(int j = 1; j <= N; j++)
            r = max(r, vl + vt[N][j] - vt[N][j-1] - ar[i][j]*2);
    }
    
    cout << r;
    return 0;
}
