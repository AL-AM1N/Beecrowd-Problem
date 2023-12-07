#include<bits/stdc++.h>
using namespace std;
int main()
{
    double pi=3.14159, r;
    double volume;
    cin >> r;

    volume = (4.0/3)*pi*(r*r*r);
    
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}