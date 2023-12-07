#include<iostream>
using namespace std;
int main()
{
    int Num, amount;
    float amount_per_hour, SALARY;
    cin>> Num >> amount >> amount_per_hour;
    cout<< "NUMBER = "<< Num<< endl;
    SALARY= amount*amount_per_hour;
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;

} 
