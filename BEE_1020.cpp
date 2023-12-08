#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x;
    if(x >= 365)
    {
        y = x/365;
        int z = x%365;
        int a = z/30;
        int b = z%30;

        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y , a , b);

    }

    else if(x >=30)
    {
        int c = x/30;
        int d = x%30;

        printf("0 ano(s)\n%d mes(es)\n%d dia(s)\n",c , d);
    }

    else printf("0 ano(s)\n0 mes(es)\n%d dia(s)\n", x);

    return 0;
}