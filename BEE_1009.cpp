#include<iostream>
using namespace std;
int main()
{
     char name;
     double a,b,TOTAL;
    scanf("%s",&name);
    scanf("%lf%lf",&a, &b);
    TOTAL = a + (b * 0.15);
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;

} 
