#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    float y, consumption;
    cin >> x >> y;

    consumption = x/y;

    printf("%.3f km/l\n", consumption);

    return 0;

}