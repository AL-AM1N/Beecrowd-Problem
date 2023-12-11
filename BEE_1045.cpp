#include<bits/stdc++.h>
using namespace std;
int main()
{
    double arr[3], a, b, c, temp;
    cin >> a >> b >> c;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    for(int i = 0; i<2; i++){
        for(int j =i + 1; j<3; j++){
            if(arr[i]<arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    a = arr[0];
    b = arr[1];
    c = arr[2];

   if(a>=(b+c))
   cout << "NAO FORMA TRIANGULO" << endl;
    else if((a*a) == (b*b+c*c))
   cout << "TRIANGULO RETANGULO" << endl;
    else if((a*a) > ((b*b)+(c*c)))
    cout << "TRIANGULO OBTUSANGULO" << endl;
    else if((a*a) < (b*b+c*c))
    cout << "TRIANGULO ACUTANGULO" << endl;
    if(a==b && a==c)
    cout << "TRIANGULO EQUILATERO" << endl;
   if((a==b && a!=c) || (b==c && b!=a) || (a==c && c!=b))
    cout << "TRIANGULO ISOSCELES" << endl;

    return 0;

}