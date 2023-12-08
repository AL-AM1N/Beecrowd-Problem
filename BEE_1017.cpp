#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    float fuel;
    cin >> x >> y;
    fuel = (1.0/12)*x*y;

    printf("%.3f\n", fuel);

    return 0;
}