#include <stdio.h>
#include <math.h>

int main(){
    float n, aritmetica=0, geometrica=1, harmonica=0, erro;

    for (int i = 0; i < 10; i++){
        scanf("%f",  &n);
        aritmetica+=n;
        geometrica*=n;
        harmonica+=(1/n);
    }

    aritmetica = aritmetica/10;
    geometrica = pow(geometrica, (1/10.0));
    harmonica = 10/harmonica;
    float erro_harmonica = (harmonica - aritmetica) / aritmetica; 
    float erro_geometrica = (geometrica - aritmetica) / aritmetica;
    erro = (erro_harmonica+erro_geometrica)/2;
    
    printf("Média aritmética é %.2f\n", aritmetica);
    printf("Média harmônica é %.2f\n", harmonica);
    printf("Média geométrica é %.2f\n", geometrica);
    printf("Erro médio é %.2f %%", erro*100);

    return 0;
}