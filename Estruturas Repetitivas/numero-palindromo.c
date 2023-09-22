#include <stdio.h>

int main(){
    int n, normal, inverso=0;

    scanf("%d", &n);

    normal = n;

    while (n>0){
       int d = n%10; //vai pegando os ultimos digitos
       inverso=inverso*10+d;
       n=n/10; // vai tirando os ultimos digitos
    }

    if(normal==inverso){
        printf("%d é Palíndromo e ", normal);
    }else{
        printf("%d não é Palíndromo e ", normal);
    }
    
    if(normal%2==0){
        printf("par.");
    }else{
        printf("impar.");
    }

    return 0;
}