#include <stdio.h>

int main(){

    int n, cont;
    float metros, soma=0;

    scanf("%d", &n);

    cont = n;

    for (int i = 0; i < n; i++){
        scanf("%f", &metros);
        if(metros!=-1){
            soma+=metros;
        }else{
            cont--;
        }
    }

    if (cont!=0){
        printf("%.2f",(soma/cont));
    }else{
        printf("A competicao nao possui dados historicos!");
    }
    
    return 0;
}