#include <stdio.h>
#include <stdbool.h>

bool ehPerfeito(int n){
    int soma = 0;

    for (int i = 1; i < n; i++){
        if(n%i==0){
            soma+=i;
        }
    }

    return soma==n;
}

int main(){

    int n, x;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
            
        scanf("%d", &x);

        if(ehPerfeito(x)){
            printf("%d eh perfeito\n", x);
        }else{
            printf("%d nao eh perfeito\n", x);
        } 
    }
    return 0;
}