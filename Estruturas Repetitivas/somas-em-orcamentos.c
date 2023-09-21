#include <stdio.h>

int main(){
    
    int itens=0, qtd=0;
    float valor, total=0;

    while(qtd!=-1){
        scanf("%d %f", &qtd, &valor);
        if(qtd!=-1){
            total+=(valor*qtd);
            itens+=qtd;
        }
       
    }

    printf("%d %.2f", itens, total);

    return 0;
}