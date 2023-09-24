#include <stdio.h>

void preencherVetor(int vetor[], int n){
    for (int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
}

void imprimirVetor(int vetor[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
}

void uniao(int vetorA[], int n, int vetorB[], int m, int vetorC[]){
    int cont = n;
    for (int i = 0; i < n; i++){
        vetorC[i]=vetorA[i];
    }
    for (int j = 0; j < m; j++){
        int repetido=0;
        for (int i = 0; i < n; i++){
            if(vetorA[i]==vetorB[j]){
                repetido=1;
                break;
            }
        }
        if (!repetido){
            vetorC[cont]=vetorB[j];
            cont++;
        }  
    }    
    
}

int tamUniao(int vetorA[], int n, int vetorB[], int m){
    int cont = n;
    for (int j = 0; j < m; j++){
        int repetido=0;
        for (int i = 0; i < n; i++){
            if(vetorA[i]==vetorB[j]){
                repetido=1;
                break;
            }
        }
        if (!repetido){
            cont++;
        }  
    } 
    return cont;   
}


int main(){
    int n, m;

    scanf("%d %d", &n, &m);
    
    int vetorA[n], vetorB[m];


    preencherVetor(vetorA, n);
    preencherVetor(vetorB, m);

    int tam = tamUniao(vetorA, n, vetorB, m);
    
    int vetorC[tam];

    uniao(vetorA, n, vetorB, m, vetorC);

    imprimirVetor(vetorC, tam);

    return 0;
}