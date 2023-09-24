#include <stdio.h>

void imprimirVetor(char letra, int vetor[], int tam){
    printf("%c = [", letra);
    for (int i = 0; i < tam; i++){
        printf("%d", vetor[i]);
        if(i!=tam-1){
            printf(", ");
        }
    }
    printf("]\n");
    
}

int main(){
    int vetorMain[15], vetorA[15], vetorB[15], vetorC[15], cont1=0, cont2=0, cont3=0;

    for (int i = 0; i < 15; i++){

        scanf("%d", &vetorMain[i]);

        if(vetorMain[i]%2==0){
            vetorA[cont1++] = vetorMain[i];
        }
        if (vetorMain[i]%3==0){
            vetorB[cont2++] = vetorMain[i];
        }
        if(!(vetorMain[i]%2==0) && !(vetorMain[i]%3==0)){
            vetorC[cont3++] = vetorMain[i];
        }
    }

    imprimirVetor('B', vetorA, cont1);
    imprimirVetor('C', vetorB, cont2);
    imprimirVetor('D', vetorC, cont3);


    
    return 0;
}