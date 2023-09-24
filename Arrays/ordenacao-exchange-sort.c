#include <stdio.h>

void imprimirVetor(int vetor[], int tam){
    for (int i = 0; i < tam; i++){
        printf("%d " , vetor[i]);
    }
    printf("\n");
}

int main(){

    int n;
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    imprimirVetor(vetor, n);

    for (int i = 0; i < n-1; i++){
       for (int j = i+1; j < n; j++){
            if (vetor[i]>vetor[j]){
                int aux = vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=aux;
            }
        }
        imprimirVetor(vetor, n);
    }
    
    

    return 0;
}