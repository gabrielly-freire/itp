#include <stdio.h>
#include <stdbool.h>

// retorna verdadeiro se numero é divisível por divisor e falso em caso
bool testa_divisor(int numero, int divisor) {
    return numero%divisor==0;
}

// retorna a soma dos divisores de value no intervalo [1,value)
int soma_divisores(int value) {
    int soma=0;
    for (int i = 1; i < value; i++){
        if(testa_divisor(value, i)){
            soma+=i;
        }
    }
  
  return soma;
}

// retorna verdadeiro se a é amigo de b e falso em caso contrário
bool testa_amigos(int a, int b) {
    return soma_divisores(a)==b && soma_divisores(b)==a;
}

// recebe dois intervalos naturais L1 = [A,B] e L2 = [C,D]
// apresenta todos os valores em L1 que possuem ao menos um amigo em L2.
int main() {

    int a, b, c, d, cont=0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    for (int i = a; i <= b; i++){
        for (int j = c; j <= d; j++){
           if(testa_amigos(i, j) && i!=j){
                printf("O %d possui um amigo!\n", i);
                cont++;
           }
        }  
    }

    if(cont==0){
        printf("Os intervalos nao apresentam amigos!");
    }
    
  return 0;
}
