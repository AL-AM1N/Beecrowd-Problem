#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,aux;
    float v[3];
    
    cin >> a >> b >> c;
    v[0] = a;
    v[1] = b;
    v[2] = c;
    
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                    if(v[i] < v[j]){
                            aux = v[j];
                            v[j] = v[i];
                            v[i] = aux;
                    }
            }
    }
    if(v[0]+v[1]>v[2]){
        printf("Perimetro = %.1f\n", v[0]+v[1]+v[2]);
    }
    else{
        printf("Area = %.1f\n", ((a+b)*c)/2);
    }
    return 0;
}
    