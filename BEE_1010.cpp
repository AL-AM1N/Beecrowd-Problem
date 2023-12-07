#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    float x, y, z;
    cin>> a >> b >> x;
    cin>> c >> d >> y;
    z = (b * x) + (d * y);

    printf("VALOR A PAGAR: R$ %.2f\n",z);


    return 0;
} 
