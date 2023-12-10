#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cin >> x;
    if(x > 100.00 || x < 0.00){
        cout << "Fora de intervalo" << endl;
    }
    else if(x <=25.00){
        cout << "Intervalo [0,25]" << endl;
    }
    else if(x <=50.00){
        cout << "Intervalo (25,50]" << endl;
    }
    else if(x <=75.00){
        cout << "Intervalo (50,75]" << endl;
    }
    else cout << "Intervalo (75,100]" << endl;

    return 0;
}