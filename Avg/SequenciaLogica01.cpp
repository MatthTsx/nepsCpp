#include<bits/stdc++.h>
// https://neps.academy/br/exercise/179

using namespace std;

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a= 0, b= 1;
    bool thing = false;
    cout <<  "a = " << a << " <-> b = " << b;
    while(b < 47){
        if(thing){
            thing = false;
            a += 2;
            b += 2;
        }else{
            b += 1;
            thing = true;
        }
        cout << "\na = " << a << " <-> b = " << b;
    }
}