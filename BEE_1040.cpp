#include<iostream>
using namespace std;
int main(){
    float a, b, c, d, MEDIA;
    cin >> a >> b >> c >> d;
    MEDIA = (a*2+b*3+c*4+d*1)/(10);
    
    printf("Media: %.1f\n",MEDIA);

    if(MEDIA >= 7.0){
        cout << "Aluno aprovado." << endl;
    }
    else if(MEDIA < 5.0){
        cout << "Aluno reprovado."  << endl;
    }
    else if (5.0 <= MEDIA < 7.0){
        cout << "Aluno em exame." << endl;
        float e;
        cin >> e;
        printf("Nota do exame: %.1f\n", e);
        MEDIA = (MEDIA + e)/2;
        if(MEDIA>=5.0){
            cout << "Aluno aprovado." << endl;
        }
        else if(MEDIA<=4.9){
            cout << "Aluno reprovado." << endl;
        }
        
        printf("Media final: %.1f\n",MEDIA);
    }
    return 0;
}
