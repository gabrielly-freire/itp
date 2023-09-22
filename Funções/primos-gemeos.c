#include <stdio.h>

int ehPrimo(int n){
    int cont = 0;

    for (int i = 1; i <= n; i++){
        if(n%i==0){
            cont++;
        }
    }

    return cont == 2;
}

int main(){
    int n;

    scanf("%d", &n);

    if(ehPrimo(n)&&ehPrimo(n+2)){
        printf("Numero forma par de gemeos");
    }else{
        printf("Numero nao forma par de gemeos");
    }

    return 0;
}
