#include <stdio.h>

int calcularMdc(int x, int y){
    
    int aux;
    
    while(y != 0){
        aux=x;
        x=y;
        y=aux%y;
    }
    
    return x;
}


int main(){
    int num1, num2, mdc;

    scanf("%d %d", &num1, &num2);

    mdc = calcularMdc(num1, num2);

    printf("MDC(%d, %d) = %d", num1, num2, mdc);
    return 0;
}