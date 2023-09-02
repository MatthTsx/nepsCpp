#include<bits/stdc++.h>
// https://neps.academy/br/exercise/198

using namespace std;

int SumRow(vector<int> row){
    int resp = 0;
    for(int i = 0; i < 3; i++)
        resp += row[i];
    return resp;
}

int SumCol(vector<vector<int>> vt, int index){
    int resp = 0;
    for(int i = 0; i < 3; i++)
        resp += vt[i][index];
    return resp;
}

int SumD1(vector<vector<int>> vt){
    int resp = 0;
    for(int i = 0; i < 3; i++)
        resp += vt[i][i];
    return resp;
}

int SumD2(vector<vector<int>> vt){
    int resp = 0;
    for(int i = 0; i < 3; i++)
        resp += vt[3 - i - 1][3 - i - 1];
    return resp;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> vt (3, vector<int> (3));

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> vt[i][j];
    
    int sum = 0;
    bool setup = true;

    for(auto r : vt){
        int res = SumRow(r);
        if(setup){
            setup = false;
            sum = res;
        }
        if(res != sum){
            cout << "NAO";
            return 0;
        }
    }

    for(int i = 0; i < 3; i++){
        int res = SumCol(vt, i);
        if(res != sum){
            cout << "NAO";
            return 0;
        }
    }

    if(SumD1(vt) != sum){
        cout << "NAO";
        return 0;
    }
    if(SumD2(vt) != sum){
        cout << "NAO";
        return 0;
    }

    cout << "SIM";
    return 0;
}
