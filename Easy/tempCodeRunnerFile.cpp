#include<bits/stdc++.h>
// https://neps.academy/exercise/610
using namespace std;

enum Directions {
    NORTH=1, SOUTH=2, EAST=3, WEST=4
};

int main(int argc, char const *argv[])
{
    cin.tie(0)->sync_with_stdio(0);
    int x, y, xi = 0, yi = 0, qnt, resp = 0, plHolder;
    cin >> x >> y >> x >> y;
    cin >> qnt;

    if(abs(x - xi) <= 1 && abs(y - yi) <= 1) resp++;

    while(qnt--){
        cin >> plHolder;
        if(plHolder == NORTH) xi++;
        else if(plHolder == SOUTH) xi--;
        else if(plHolder == EAST) yi++;
        else yi--;
        if( (abs(x - xi) <= 1 || abs(y - yi) <= 1) && !(abs(x-xi) == 1 && abs(y-yi) == 1)) resp++;
    }

    cout << resp;
    return 0;
}
