#include<bits/stdc++.h>
using namespace std;
int main()
{
    float pi=3.14159, r, volume;
    cin >> r;

    volume = (4.0/3)*pi*(r*r*r);
    
    printf("VOLUME = %.3f", volume);
    return 0;
}