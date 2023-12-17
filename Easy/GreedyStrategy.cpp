#include<bits/stdc++.h>

using namespace std;

vector<int> S {100,50,25,10,5,1};
int V, resp = 0;

void getInputs(){
    cin >> V;
}

void Solve(){
    while(V){
        for (auto &&i : S)
            if(V >= i){
                resp++;
                V -= i;
                break;
            }
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    getInputs();
    Solve();

    cout << resp;
    return 0;
}
