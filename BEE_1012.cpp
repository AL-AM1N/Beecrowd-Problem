#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c, triangle, circle, trapezium, square, rectangle;
    cin >> a >> b >> c;
    triangle = .5 * a * c;
    circle = 3.14159 * c * c;
    trapezium = ((a + b) * c)/2;
    square = b * b;
    rectangle = a * b;

    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",triangle, circle, trapezium, square, rectangle);

    return 0;
}