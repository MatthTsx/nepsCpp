#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int P, R;
    cin >> P >> R;
    int resp;

    if(P == 0) resp = 2;
    else if(R == 0) resp = 1;
    else resp = 0;
    
    char re = resp == 2 ? 'C' : resp == 1 ? 'B' : 'A';
    cout << re << "\n";
    return 0;
}
