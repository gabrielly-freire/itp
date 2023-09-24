#include <stdio.h>

void preencherVetor(int vetor[], int tam){
  for(int i = 0; i<tam; i++){
    scanf("%d", &vetor[i]);
  }
}

void imprimirVetor(int vetor[], int tam){
  for (int i = 0; i < tam; i++){
    printf("%d ", vetor[i]);
  }
}

int tamIntersecao(int vetorA[], int n, int vetorB[], int m){
    int cont = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (vetorA[i]==vetorB[j]){
                cont++;
            }
        }
    }
    return cont;
}

void intersecao(int vetorA[], int n, int vetorB[], int m, int vetorC[]){
    int cont = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (vetorA[i]==vetorB[j]){
                vetorC[cont]=vetorA[i];
                cont++;
            }
        }
    }
}

int main(){

    int n, m;

    scanf("%d %d", &n, &m);

    int vetorA[n], vetorB[m];

    preencherVetor(vetorA, n);
    preencherVetor(vetorB, m);

    int tam = tamIntersecao(vetorA, n, vetorB, m);
    int vetorC[tam];

    intersecao(vetorA, n, vetorB, m, vetorC);

    imprimirVetor(vetorC, tam);

    return 0;
}