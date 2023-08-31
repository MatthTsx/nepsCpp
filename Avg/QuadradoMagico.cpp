#include<bits/stdc++.h>
// https://neps.academy/br/exercise/236

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<vector<int>> vt (N, vector<int> (N,0));
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++) cin >> vt[i][j];
    
    bool isMagic = true;
    int resp = -1;

    for(int i = 0; i < N; i++){
        int vl = 0;
        for(int j = 0; j < N; j++) vl += vt[i][j];
        if(resp == -1) resp = vl;
        if(vl != resp) {isMagic = false; break;}
    }
    for(int i = 0; i < N; i++){
        if(!isMagic) break;
        int vl = 0;
        for(int j = 0; j < N; j++) vl += vt[j][i];
        if(vl != resp) {isMagic = false; break;}
    }

    int val = 0;
    for(int i = 0; i < N; i++){
        if(!isMagic) break;
        val += vt[i][i];
    }
    if(val != resp) isMagic = false;

    val = 0;
    for(int i = 0; i < N; i++){
        if(!isMagic) break;
        val += vt[i][N-i-1];
    }
    if(val != resp) isMagic = false;

    cout << (isMagic ? resp : -1);
    return 0;
}
