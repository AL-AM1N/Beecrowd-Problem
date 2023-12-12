#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(a==0 && b==0){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if (a<b)
    {
        printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }
    else{
        printf("O JOGO DUROU %d HORA(S)\n",(24-a)+b);
    }

    return 0;
    
}