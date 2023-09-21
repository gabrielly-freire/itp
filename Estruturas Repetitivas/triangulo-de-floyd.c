#include <stdio.h>

int main(){
    int n, cont=1;

    scanf("%d", &n);
    if(n>0){
        for (int i = 0; i < n; i++){
            for (int j = 0; j <= i; j++){
                if(cont<10){
                    printf(" %d ",cont);
                }else{
                    printf("%d ",cont);
                }
                cont++;
            }
            printf("\n");
        }    
    }else{
        printf("Você entrou com %d, tente de novo na próxima", n); 
    }
    
    return 0;
}