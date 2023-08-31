#include<bits/stdc++.h>
// https://neps.academy/br/exercise/218

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char determinante;
    float v1, v2;
    cin >> determinante >> v1 >> v2;

    if(determinante == 'M') printf("%.2f", (v1 * v2));
    else printf("%.2f",(v1 / v2));

    return 0;
}
