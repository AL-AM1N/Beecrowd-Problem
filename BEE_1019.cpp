#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x;
    if(x >= 3600)
    {
        y = x/3600;
        int z = x%3600;
        int a = z/60;
        int b = z%60;

        printf("%d:%d:%d\n", y , a , b);

    }

    else if(x >= 60)
    {
        int c = x/60;
        int d = x%60;

        printf("0:%d:%d\n", c , d);
    }

    else printf("0:0:%d\n",x);

    return 0;
}